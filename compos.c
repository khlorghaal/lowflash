#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/extensions/XShm.h>
#include "gl3w.h"
//#include <GL/gl.h>
#include <GL/glx.h>
//#include <GL/glcorearb.h>
//#include <GL/glext.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

Display *dpy;
Window root;
int x11Screen;

XVisualInfo *vi;
Colormap cmap;
XSetWindowAttributes swa;
Window win;
GLXContext glc;
XWindowAttributes gwa;
XEvent xev;

GLint att[] = { GLX_RGBA, GLX_DEPTH_SIZE, 24, GLX_DOUBLEBUFFER, None };


void InitX() {
    dpy = XOpenDisplay(NULL);
    if (dpy == NULL) {
        fprintf(stderr, "Could not open X display\n");
        exit(1);
    }

    x11Screen = DefaultScreen(dpy);
    root = RootWindow(dpy, x11Screen);

    vi = glXChooseVisual(dpy, 0, att);
    if (vi == NULL) {
        fprintf(stderr, "No appropriate visual found\n");
        exit(1);
    }

    cmap = XCreateColormap(dpy, root, vi->visual, AllocNone);
    swa.colormap = cmap;
    swa.event_mask = ExposureMask | KeyPressMask;

    win = XCreateWindow(dpy, root, 0, 0, WINDOW_WIDTH, WINDOW_HEIGHT, 0, vi->depth, InputOutput, vi->visual, CWColormap | CWEventMask, &swa);
    XMapWindow(dpy, win);
    XStoreName(dpy, win, "X11 FBO Capture");

    glc = glXCreateContext(dpy, vi, NULL, GL_TRUE);
    glXMakeCurrent(dpy, win, glc);
}
void CleanupX() {
    glXMakeCurrent(dpy, None, NULL);
    glXDestroyContext(dpy, glc);
    XDestroyWindow(dpy, win);
    XCloseDisplay(dpy);
}

void initGL(){

}

void Draw() {
    // Retrieve the X11 root window's content using XShm
    XShmSegmentInfo shminfo;
    XImage *ximage;

    shminfo.shmid = shmget(IPC_PRIVATE, gwa.width * gwa.height * 4, IPC_CREAT | 0777);
    shminfo.shmaddr = (char *)shmat(shminfo.shmid, 0, 0);
    shminfo.readOnly = False;
    XShmAttach(dpy, &shminfo);

    ximage = XShmCreateImage(dpy, gwa.visual, gwa.depth, ZPixmap, shminfo.shmaddr, &shminfo, gwa.width, gwa.height);
    ximage->data = shminfo.shmaddr;

    XShmGetImage(dpy, root, ximage, 0, 0, 0xFFFFFFFF);

    // Create a GL framebuffer object (FBO) and attach the X11 content as a texture
    GLuint fbo, texture;
    glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);

    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, gwa.width, gwa.height, 0, GL_BGRA, GL_UNSIGNED_BYTE, ximage->data);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, texture, 0);

    // Render the texture
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);

    glBindBuffer(GL_ARRAY_BUFFER,0);
    glDrawArrays(GL_TRIANGLE_STRIP, 0,4);

    // Swap buffers
    glXSwapBuffers(dpy, win);

    // Cleanup
    XShmDetach(dpy, &shminfo);
    XDestroyImage(ximage);
    shmdt(shminfo.shmaddr);
    shmctl(shminfo.shmid, IPC_RMID, NULL);

    // Delete FBO and texture
    glDeleteFramebuffers(1, &fbo);
    glDeleteTextures(1, &texture);
}

int main() {
    InitX();

    gl3wInit();

    while (1) {
        XNextEvent(dpy, &xev);

        if (xev.type == Expose) {
            XGetWindowAttributes(dpy, win, &gwa);
            glViewport(0, 0, gwa.width, gwa.height);
            Draw();
        }
        else if (xev.type == KeyPress) {
            CleanupX();
            exit(0);
        }
    }

    return 0;
}
































#pragma once

struct GLProg: inplace{
    int ptr= 0;

    struct stage{
        int ptr;
        str fnam;
        str src;
        int type;
        str typenam;
        operator str();
    };
    stage c ={0, "","", GL_COMPUTE_SHADER,        "compute"};
    stage v ={0, "","", GL_VERTEX_SHADER,         "vertex"};
    stage tc={0, "","", GL_TESS_CONTROL_SHADER,   "tess_control"};
    stage te={0, "","", GL_TESS_EVALUATION_SHADER,"tess_eval"};
    stage g ={0, "","", GL_GEOMETRY_SHADER,       "geometry"};
    stage f ={0, "","", GL_FRAGMENT_SHADER,       "fragment"};
    arr<stage> stages= {&c,&f+1};

    str progs();
    str sources();//preprocessed

    hash_map<str, int> umap;
    vector<pair<str, int>> permas;

    GLProg()= default;
    void init(char const* c);
    void init(char const* v,char const* f);
    void init(char const* v,char const* g,char const* f);
    void init(char const* v,char const* tc,char const* te,char const* f);
    void init(char const* v,char const* tc,char const* te,char const* g,char const* f);
    ~GLProg();
    
    static void reloadAll();
    void reload();

    void initUnis();
    void permaUniform1i(char const* name, int val);//preserves across refreshing
    int op[](char const*);//uniform

    static GLProg* active;
    void bind();
};




void getpiv(int iv, int ptr){
    GLint lt;
    glGetProgramiv(ptr, iv, &lt);
    if(!lt){
        GLint ill;
        glGetProgramiv(ptr, GL_INFO_LOG_LENGTH, &ill);
        if(!ill)
            return;

        str log;
        log.dat.realloc(ill);
        glGetProgramInfoLog(ptr, ill, NULL, log.dat.base);
        log.dat.stop+= ill;
        if(log.dat.base[0])
            err(log);
    }
}

str preprocess(str const& s){
    str r= str::fmt("#version %i \n",GLSL_VERSION);//header
    //TODO includes
    r+= "#line 1\n";
    r+= s;

    return r;
}
str getShaderSrc(str const& snam){
    str fnamlist[3];
    (fnamlist[0]+=      "glsl/")+=snam;
    (fnamlist[1]+=   "../glsl/")+=snam;
    (fnamlist[2]+="../../glsl/")+=snam;
    int i=0;
    for(str& fnam : fnamlist){
        str fout;
        bool ferr= file_dump(fout,fnam);
        if(!ferr && fout.size()!=0 && !!fout[0])
            return preprocess(fout);
    }
    err(str::fmt("Cannot find or open shader src %s",snam.cstr()));
    return str();
}
int doShader(GLProg& gprog, GLProg::stage& stage){
    int const prog= gprog.ptr;
    auto& ptr=  stage.ptr;
    auto& src=  stage.src;
    auto& type= stage.type;
    auto& fnam= stage.fnam;

    ptr= glCreateShader(type);
    src= getShaderSrc(fnam);
    glShaderSource(ptr,1,&(src.dat.base),0);
    glCompileShader(ptr);

    GLint lt;
    glGetShaderiv(ptr,GL_COMPILE_STATUS,&lt);
    if(!lt){
        GLint ill;
        glGetShaderiv(ptr,GL_INFO_LOG_LENGTH,&ill);//terminator included
        if(ill){
            str log;
            log.dat.realloc(ill);
            glGetShaderInfoLog(ptr,ill,NULL,log.dat.base);
            log.dat.stop+= ill;
            if(log.dat[0])
                err((((str(fnam)+=": \n")+=log)));
        }
    }

    glAttachShader(prog,ptr);
    render::checkerr();
    return ptr;
}
void detachDelete(int prog,int ptr){
    glDetachShader(prog,ptr);
    glDeleteShader(ptr);
}

void GLProg__init(
        GLProg& prog,
        char const* c_,//compute
        char const* v_,//vertex
        char const* tc_,//tess control
        char const* te_,//tess eval
        char const* g_,//geometry
        char const* f_//fragment
    ){
    BIND(prog,ptr);
    if(ptr)
        glDeleteProgram(ptr);
    ptr= glCreateProgram();

    char const** p= &c_;
    for(auto& s : prog.stages){
        char const* fnam= *(p++);
        if(!fnam || !fnam[0])
            continue;
        s.fnam= fnam;
        doShader(prog,s);
    }

    render::checkerr();

    glLinkProgram(ptr);
    getpiv(GL_LINK_STATUS, ptr);
    glValidateProgram(ptr);
    getpiv(GL_VALIDATE_STATUS, ptr);

    render::checkerr();

    for(auto& s : prog.stages){
        if(!!s.ptr){
            detachDelete(ptr, s.ptr);
            s.ptr= 0;
        }
    }

    glUseProgram(ptr);

    prog.initUnis();

    render::checkerr();
}
void GLProg::init(char const* c){                                                           GLProg__init(*this, c,0, 0, 0,0,0); }
void GLProg::init(char const* v,char const* f){                                             GLProg__init(*this, 0,v, 0, 0,0,f ); }
void GLProg::init(char const* v,char const* g,char const* f){                               GLProg__init(*this, 0,v, 0, 0,g,f ); }
void GLProg::init(char const* v,char const* tc,char const* te,char const* f){               GLProg__init(*this, 0,v,tc,te,0,f ); }
void GLProg::init(char const* v,char const* tc,char const* te,char const* g,char const* f){ GLProg__init(*this, 0,v,tc,te,g,f ); }
GLProg::~GLProg(){
    if(ptr!=0)
        glDeleteProgram(ptr);
    ptr= 0;
}
void GLProg::reload(){
    GLProg__init(*this,
         c.fnam.cstr(),
         v.fnam.cstr(),
        tc.fnam.cstr(),
        te.fnam.cstr(),
         g.fnam.cstr(),
         f.fnam.cstr());

    bind();
    for(auto& p : permas)
        glUniform1i(*umap[p.a], p.b);
}



GLProg* GLProg::active;
void GLProg::bind(){
    //ass(this!=active);
    ass(!!ptr);
    active= this;
    glUseProgram(ptr);
}



void GLProg::initUnis(){
    umap.clear();
    int count;
    int chbufsiz;
    glGetProgramiv(ptr, GL_ACTIVE_UNIFORMS, &count);
    glGetProgramiv(ptr, GL_ACTIVE_UNIFORM_MAX_LENGTH, &chbufsiz);
    //included by gl //chbufsiz+=1;//null terminator
    char* name= new char[chbufsiz];
    GLenum typ;
    GLint siz;
    for(int i=0; i!=count; i++){
        glGetActiveUniform(ptr, i, chbufsiz, NULL, &siz, &typ, name);
        umap.make(str(name),i);
    }
    delete[](name);
}
/** A replacement for layout(location|binding=N)
* Will be preserved if the program gets reloaded.
* Should be used only when initializing.*/
void GLProg::permaUniform1i(char const* name, int val){
    bind();
    if(!umap[str(name)]){
        err(str::fmt("Uniform %s not in program %s",name,ptr));
        return;
    }
    permas.make(pair<str,int>{name, val});
    glUniform1i(operator[](name), val);
}

int GLProg::operator[](char const* name){
    int* p= umap[str(name)];
    if(!p){
        warn(str("missing uniform name: ").cat(name).cat(GLProg::active->progs()));
        //todo list available {index,uniform}[]
        return -1;
    }
    return *p;
}

GLProg::stage::operator str(){
    return typenam.cat(": ").cat(fnam);
}
str GLProg::progs(){
    str ret= "GLProgram Files:";
    for(auto& s : stages){
        if(!!s.fnam)
            ret.cat("\n\t").cat(s);
    }
    return ret;
}
str GLProg::sources(){
    str ret= "GLProgram Sources Preprocessed:";
    for(auto& s : stages){
        if(!!s.fnam)
            ret.cat(s.typenam)
               .cat(": ")
               .cat(s.fnam)
               .cat(":\n")
               .cat(s.src)
               .cat("\n========\n");
    }
    return ret;
}












GLProg texprog;
void texture_static_init(){
    texprog.init("reflex_pos2_uv.vert","texture.frag");
}

void texture::make(int w_, int h_, GLuint intfmt, GLuint datfmt, GLuint dattyp, void* dat){
    w= w_;
    h= h_;
    if(id==-1)
        glGenTextures(1, &id);
    glBindTexture(GL_TEXTURE_2D, id);
    glTexImage2D(GL_TEXTURE_2D,0,intfmt,w,h,0,datfmt,dattyp,dat);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_BASE_LEVEL, 0);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAX_LEVEL,  0);
    //TODO mipmaps
}
void texture::make(int w_, int h_, GLuint intfmt){
    str dat;
    dat.dat.realloc(w_*h_);
    //TODO default debug texture
    make(w_,h_,intfmt,GL_RED,GL_UNSIGNED_BYTE,dat.dat.base);
}
void texture::bind(){
    glBindTexture(GL_TEXTURE_2D, id);
}
void texture::renderDebug(){
    texprog.bind();
    bind();
    shapes::quad_xy_uv();
}


void framebuffertexture::make(int w_, int h_, GLuint fmt){
    w= w_;
    h= h_;
    texture.make(w,h, fmt);
    if(id==-1)
        glGenFramebuffers(1, &id);
    glBindFramebuffer(GL_FRAMEBUFFER, id);
    glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, texture.id, 0);
    auto fbstat= glCheckFramebufferStatus(GL_FRAMEBUFFER);
    if(fbstat!=GL_FRAMEBUFFER_COMPLETE){
        err(str::fmt("incomplete framebuffer, status %s %s",fbstat,*glenum_namemap[fbstat]));
    }
}
void framebuffertexture::bind(){
    glViewport(0,0,w,h);
    glBindFramebuffer(GL_FRAMEBUFFER, id);
}
