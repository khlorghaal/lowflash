#pragma once

extern void checkglerr();

//nonvoid return

#define glGenBuffers                                  gl3wGenBuffers
#define glGenFramebuffers                             gl3wGenFramebuffers
#define glGenProgramPipelines                         gl3wGenProgramPipelines
#define glGenQueries                                  gl3wGenQueries
#define glGenRenderbuffers                            gl3wGenRenderbuffers
#define glGenSamplers                                 gl3wGenSamplers
#define glGenTextures                                 gl3wGenTextures
#define glGenTransformFeedbacks                       gl3wGenTransformFeedbacks
#define glGenVertexArrays                             gl3wGenVertexArrays

#define glGetActiveAtomicCounterBufferiv              gl3wGetActiveAtomicCounterBufferiv
#define glGetActiveAttrib                             gl3wGetActiveAttrib
#define glGetActiveSubroutineName                     gl3wGetActiveSubroutineName
#define glGetActiveSubroutineUniformName              gl3wGetActiveSubroutineUniformName
#define glGetActiveSubroutineUniformiv                gl3wGetActiveSubroutineUniformiv
#define glGetActiveUniform                            gl3wGetActiveUniform
#define glGetActiveUniformBlockName                   gl3wGetActiveUniformBlockName
#define glGetActiveUniformBlockiv                     gl3wGetActiveUniformBlockiv
#define glGetActiveUniformName                        gl3wGetActiveUniformName
#define glGetActiveUniformsiv                         gl3wGetActiveUniformsiv
#define glGetAttachedShaders                          gl3wGetAttachedShaders
#define glGetAttribLocation                           gl3wGetAttribLocation
#define glGetBooleani_v                               gl3wGetBooleani_v
#define glGetBooleanv                                 gl3wGetBooleanv
#define glGetBufferParameteri64v                      gl3wGetBufferParameteri64v
#define glGetBufferParameteriv                        gl3wGetBufferParameteriv
#define glGetBufferPointerv                           gl3wGetBufferPointerv
#define glGetBufferSubData                            gl3wGetBufferSubData
#define glGetCompressedTexImage                       gl3wGetCompressedTexImage
#define glGetCompressedTextureImage                   gl3wGetCompressedTextureImage
#define glGetCompressedTextureSubImage                gl3wGetCompressedTextureSubImage
#define glGetDebugMessageLog                          gl3wGetDebugMessageLog
#define glGetDebugMessageLogARB                       gl3wGetDebugMessageLogARB
#define glGetDoublei_v                                gl3wGetDoublei_v
#define glGetDoublev                                  gl3wGetDoublev
#define glGetError                                    gl3wGetError
#define glGetFloati_v                                 gl3wGetFloati_v
#define glGetFloatv                                   gl3wGetFloatv
#define glGetFragDataIndex                            gl3wGetFragDataIndex
#define glGetFragDataLocation                         gl3wGetFragDataLocation
#define glGetFramebufferAttachmentParameteriv         gl3wGetFramebufferAttachmentParameteriv
#define glGetFramebufferParameteriv                   gl3wGetFramebufferParameteriv
#define glGetGraphicsResetStatus                      gl3wGetGraphicsResetStatus
#define glGetGraphicsResetStatusARB                   gl3wGetGraphicsResetStatusARB
#define glGetImageHandleARB                           gl3wGetImageHandleARB
#define glGetInteger64i_v                             gl3wGetInteger64i_v
#define glGetInteger64v                               gl3wGetInteger64v
#define glGetIntegeri_v                               gl3wGetIntegeri_v
#define glGetIntegerv                                 gl3wGetIntegerv
#define glGetInternalformati64v                       gl3wGetInternalformati64v
#define glGetInternalformativ                         gl3wGetInternalformativ
#define glGetMultisamplefv                            gl3wGetMultisamplefv
#define glGetNamedBufferParameteri64v                 gl3wGetNamedBufferParameteri64v
#define glGetNamedBufferParameteriv                   gl3wGetNamedBufferParameteriv
#define glGetNamedBufferPointerv                      gl3wGetNamedBufferPointerv
#define glGetNamedBufferSubData                       gl3wGetNamedBufferSubData
#define glGetNamedFramebufferAttachmentParameteriv    gl3wGetNamedFramebufferAttachmentParameteriv
#define glGetNamedFramebufferParameteriv              gl3wGetNamedFramebufferParameteriv
#define glGetNamedRenderbufferParameteriv             gl3wGetNamedRenderbufferParameteriv
#define glGetNamedStringARB                           gl3wGetNamedStringARB
#define glGetNamedStringivARB                         gl3wGetNamedStringivARB
#define glGetObjectLabel                              gl3wGetObjectLabel
#define glGetObjectPtrLabel                           gl3wGetObjectPtrLabel
#define glGetPointerv                                 gl3wGetPointerv
#define glGetProgramBinary                            gl3wGetProgramBinary
#define glGetProgramInfoLog                           gl3wGetProgramInfoLog
#define glGetProgramInterfaceiv                       gl3wGetProgramInterfaceiv
#define glGetProgramPipelineInfoLog                   gl3wGetProgramPipelineInfoLog
#define glGetProgramPipelineiv                        gl3wGetProgramPipelineiv
#define glGetProgramResourceIndex                     gl3wGetProgramResourceIndex
#define glGetProgramResourceLocation                  gl3wGetProgramResourceLocation
#define glGetProgramResourceLocationIndex             gl3wGetProgramResourceLocationIndex
#define glGetProgramResourceName                      gl3wGetProgramResourceName
#define glGetProgramResourceiv                        gl3wGetProgramResourceiv
#define glGetProgramStageiv                           gl3wGetProgramStageiv
#define glGetProgramiv                                gl3wGetProgramiv
#define glGetQueryBufferObjecti64v                    gl3wGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv                      gl3wGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v                   gl3wGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv                     gl3wGetQueryBufferObjectuiv
#define glGetQueryIndexediv                           gl3wGetQueryIndexediv
#define glGetQueryObjecti64v                          gl3wGetQueryObjecti64v
#define glGetQueryObjectiv                            gl3wGetQueryObjectiv
#define glGetQueryObjectui64v                         gl3wGetQueryObjectui64v
#define glGetQueryObjectuiv                           gl3wGetQueryObjectuiv
#define glGetQueryiv                                  gl3wGetQueryiv
#define glGetRenderbufferParameteriv                  gl3wGetRenderbufferParameteriv
#define glGetSamplerParameterIiv                      gl3wGetSamplerParameterIiv
#define glGetSamplerParameterIuiv                     gl3wGetSamplerParameterIuiv
#define glGetSamplerParameterfv                       gl3wGetSamplerParameterfv
#define glGetSamplerParameteriv                       gl3wGetSamplerParameteriv
#define glGetShaderInfoLog                            gl3wGetShaderInfoLog
#define glGetShaderPrecisionFormat                    gl3wGetShaderPrecisionFormat
#define glGetShaderSource                             gl3wGetShaderSource
#define glGetShaderiv                                 gl3wGetShaderiv
#define glGetString                                   gl3wGetString
#define glGetStringi                                  gl3wGetStringi
#define glGetSubroutineIndex                          gl3wGetSubroutineIndex
#define glGetSubroutineUniformLocation                gl3wGetSubroutineUniformLocation
#define glGetSynciv                                   gl3wGetSynciv
#define glGetTexImage                                 gl3wGetTexImage
#define glGetTexLevelParameterfv                      gl3wGetTexLevelParameterfv
#define glGetTexLevelParameteriv                      gl3wGetTexLevelParameteriv
#define glGetTexParameterIiv                          gl3wGetTexParameterIiv
#define glGetTexParameterIuiv                         gl3wGetTexParameterIuiv
#define glGetTexParameterfv                           gl3wGetTexParameterfv
#define glGetTexParameteriv                           gl3wGetTexParameteriv
#define glGetTextureHandleARB                         gl3wGetTextureHandleARB
#define glGetTextureImage                             gl3wGetTextureImage
#define glGetTextureLevelParameterfv                  gl3wGetTextureLevelParameterfv
#define glGetTextureLevelParameteriv                  gl3wGetTextureLevelParameteriv
#define glGetTextureParameterIiv                      gl3wGetTextureParameterIiv
#define glGetTextureParameterIuiv                     gl3wGetTextureParameterIuiv
#define glGetTextureParameterfv                       gl3wGetTextureParameterfv
#define glGetTextureParameteriv                       gl3wGetTextureParameteriv
#define glGetTextureSamplerHandleARB                  gl3wGetTextureSamplerHandleARB
#define glGetTextureSubImage                          gl3wGetTextureSubImage
#define glGetTransformFeedbackVarying                 gl3wGetTransformFeedbackVarying
#define glGetTransformFeedbacki64_v                   gl3wGetTransformFeedbacki64_v
#define glGetTransformFeedbacki_v                     gl3wGetTransformFeedbacki_v
#define glGetTransformFeedbackiv                      gl3wGetTransformFeedbackiv
#define glGetUniformBlockIndex                        gl3wGetUniformBlockIndex
#define glGetUniformIndices                           gl3wGetUniformIndices
#define glGetUniformLocation                          gl3wGetUniformLocation
#define glGetUniformSubroutineuiv                     gl3wGetUniformSubroutineuiv
#define glGetUniformdv                                gl3wGetUniformdv
#define glGetUniformfv                                gl3wGetUniformfv
#define glGetUniformiv                                gl3wGetUniformiv
#define glGetUniformuiv                               gl3wGetUniformuiv
#define glGetVertexArrayIndexed64iv                   gl3wGetVertexArrayIndexed64iv
#define glGetVertexArrayIndexediv                     gl3wGetVertexArrayIndexediv
#define glGetVertexArrayiv                            gl3wGetVertexArrayiv
#define glGetVertexAttribIiv                          gl3wGetVertexAttribIiv
#define glGetVertexAttribIuiv                         gl3wGetVertexAttribIuiv
#define glGetVertexAttribLdv                          gl3wGetVertexAttribLdv
#define glGetVertexAttribLui64vARB                    gl3wGetVertexAttribLui64vARB
#define glGetVertexAttribPointerv                     gl3wGetVertexAttribPointerv
#define glGetVertexAttribdv                           gl3wGetVertexAttribdv
#define glGetVertexAttribfv                           gl3wGetVertexAttribfv
#define glGetVertexAttribiv                           gl3wGetVertexAttribiv
#define glGetnCompressedTexImage                      gl3wGetnCompressedTexImage
#define glGetnCompressedTexImageARB                   gl3wGetnCompressedTexImageARB
#define glGetnTexImage                                gl3wGetnTexImage
#define glGetnTexImageARB                             gl3wGetnTexImageARB
#define glGetnUniformdv                               gl3wGetnUniformdv
#define glGetnUniformdvARB                            gl3wGetnUniformdvARB
#define glGetnUniformfv                               gl3wGetnUniformfv
#define glGetnUniformfvARB                            gl3wGetnUniformfvARB
#define glGetnUniformiv                               gl3wGetnUniformiv
#define glGetnUniformivARB                            gl3wGetnUniformivARB
#define glGetnUniformuiv                              gl3wGetnUniformuiv
#define glGetnUniformuivARB                           gl3wGetnUniformuivARB


//void return 


#define glActiveShaderProgram(...)                         gl3wActiveShaderProgram(__VA_ARGS__); checkglerr();
#define glActiveTexture(...)                               gl3wActiveTexture(__VA_ARGS__); checkglerr();
#define glAttachShader(...)                                gl3wAttachShader(__VA_ARGS__); checkglerr();
#define glBeginConditionalRender(...)                      gl3wBeginConditionalRender(__VA_ARGS__); checkglerr();
#define glBeginQuery(...)                                  gl3wBeginQuery(__VA_ARGS__); checkglerr();
#define glBeginQueryIndexed(...)                           gl3wBeginQueryIndexed(__VA_ARGS__); checkglerr();
#define glBeginTransformFeedback(...)                      gl3wBeginTransformFeedback(__VA_ARGS__); checkglerr();
#define glBindAttribLocation(...)                          gl3wBindAttribLocation(__VA_ARGS__); checkglerr();
#define glBindBuffer(...)                                  gl3wBindBuffer(__VA_ARGS__); checkglerr();
#define glBindBufferBase(...)                              gl3wBindBufferBase(__VA_ARGS__); checkglerr();
#define glBindBufferRange(...)                             gl3wBindBufferRange(__VA_ARGS__); checkglerr();
#define glBindBuffersBase(...)                             gl3wBindBuffersBase(__VA_ARGS__); checkglerr();
#define glBindBuffersRange(...)                            gl3wBindBuffersRange(__VA_ARGS__); checkglerr();
#define glBindFragDataLocation(...)                        gl3wBindFragDataLocation(__VA_ARGS__); checkglerr();
#define glBindFragDataLocationIndexed(...)                 gl3wBindFragDataLocationIndexed(__VA_ARGS__); checkglerr();
#define glBindFramebuffer(...)                             gl3wBindFramebuffer(__VA_ARGS__); checkglerr();
#define glBindImageTexture(...)                            gl3wBindImageTexture(__VA_ARGS__); checkglerr();
#define glBindImageTextures(...)                           gl3wBindImageTextures(__VA_ARGS__); checkglerr();
#define glBindProgramPipeline(...)                         gl3wBindProgramPipeline(__VA_ARGS__); checkglerr();
#define glBindRenderbuffer(...)                            gl3wBindRenderbuffer(__VA_ARGS__); checkglerr();
#define glBindSampler(...)                                 gl3wBindSampler(__VA_ARGS__); checkglerr();
#define glBindSamplers(...)                                gl3wBindSamplers(__VA_ARGS__); checkglerr();
#define glBindTexture(...)                                 gl3wBindTexture(__VA_ARGS__); checkglerr();
#define glBindTextureUnit(...)                             gl3wBindTextureUnit(__VA_ARGS__); checkglerr();
#define glBindTextures(...)                                gl3wBindTextures(__VA_ARGS__); checkglerr();
#define glBindTransformFeedback(...)                       gl3wBindTransformFeedback(__VA_ARGS__); checkglerr();
#define glBindVertexArray(...)                             gl3wBindVertexArray(__VA_ARGS__); checkglerr();
#define glBindVertexBuffer(...)                            gl3wBindVertexBuffer(__VA_ARGS__); checkglerr();
#define glBindVertexBuffers(...)                           gl3wBindVertexBuffers(__VA_ARGS__); checkglerr();
#define glBlendColor(...)                                  gl3wBlendColor(__VA_ARGS__); checkglerr();
#define glBlendEquation(...)                               gl3wBlendEquation(__VA_ARGS__); checkglerr();
#define glBlendEquationSeparate(...)                       gl3wBlendEquationSeparate(__VA_ARGS__); checkglerr();
#define glBlendEquationSeparatei(...)                      gl3wBlendEquationSeparatei(__VA_ARGS__); checkglerr();
#define glBlendEquationSeparateiARB(...)                   gl3wBlendEquationSeparateiARB(__VA_ARGS__); checkglerr();
#define glBlendEquationi(...)                              gl3wBlendEquationi(__VA_ARGS__); checkglerr();
#define glBlendEquationiARB(...)                           gl3wBlendEquationiARB(__VA_ARGS__); checkglerr();
#define glBlendFunc(...)                                   gl3wBlendFunc(__VA_ARGS__); checkglerr();
#define glBlendFuncSeparate(...)                           gl3wBlendFuncSeparate(__VA_ARGS__); checkglerr();
#define glBlendFuncSeparatei(...)                          gl3wBlendFuncSeparatei(__VA_ARGS__); checkglerr();
#define glBlendFuncSeparateiARB(...)                       gl3wBlendFuncSeparateiARB(__VA_ARGS__); checkglerr();
#define glBlendFunci(...)                                  gl3wBlendFunci(__VA_ARGS__); checkglerr();
#define glBlendFunciARB(...)                               gl3wBlendFunciARB(__VA_ARGS__); checkglerr();
#define glBlitFramebuffer(...)                             gl3wBlitFramebuffer(__VA_ARGS__); checkglerr();
#define glBlitNamedFramebuffer(...)                        gl3wBlitNamedFramebuffer(__VA_ARGS__); checkglerr();
#define glBufferData(...)                                  gl3wBufferData(__VA_ARGS__); checkglerr();
#define glBufferPageCommitmentARB(...)                     gl3wBufferPageCommitmentARB(__VA_ARGS__); checkglerr();
#define glBufferStorage(...)                               gl3wBufferStorage(__VA_ARGS__); checkglerr();
#define glBufferSubData(...)                               gl3wBufferSubData(__VA_ARGS__); checkglerr();
#define glCheckFramebufferStatus(...)                      gl3wCheckFramebufferStatus(__VA_ARGS__); checkglerr();
#define glCheckNamedFramebufferStatus(...)                 gl3wCheckNamedFramebufferStatus(__VA_ARGS__); checkglerr();
#define glClampColor(...)                                  gl3wClampColor(__VA_ARGS__); checkglerr();
#define glClear(...)                                       gl3wClear(__VA_ARGS__); checkglerr();
#define glClearBufferData(...)                             gl3wClearBufferData(__VA_ARGS__); checkglerr();
#define glClearBufferSubData(...)                          gl3wClearBufferSubData(__VA_ARGS__); checkglerr();
#define glClearBufferfi(...)                               gl3wClearBufferfi(__VA_ARGS__); checkglerr();
#define glClearBufferfv(...)                               gl3wClearBufferfv(__VA_ARGS__); checkglerr();
#define glClearBufferiv(...)                               gl3wClearBufferiv(__VA_ARGS__); checkglerr();
#define glClearBufferuiv(...)                              gl3wClearBufferuiv(__VA_ARGS__); checkglerr();
#define glClearColor(...)                                  gl3wClearColor(__VA_ARGS__); checkglerr();
#define glClearDepth(...)                                  gl3wClearDepth(__VA_ARGS__); checkglerr();
#define glClearDepthf(...)                                 gl3wClearDepthf(__VA_ARGS__); checkglerr();
#define glClearNamedBufferData(...)                        gl3wClearNamedBufferData(__VA_ARGS__); checkglerr();
#define glClearNamedBufferSubData(...)                     gl3wClearNamedBufferSubData(__VA_ARGS__); checkglerr();
#define glClearNamedFramebufferfi(...)                     gl3wClearNamedFramebufferfi(__VA_ARGS__); checkglerr();
#define glClearNamedFramebufferfv(...)                     gl3wClearNamedFramebufferfv(__VA_ARGS__); checkglerr();
#define glClearNamedFramebufferiv(...)                     gl3wClearNamedFramebufferiv(__VA_ARGS__); checkglerr();
#define glClearNamedFramebufferuiv(...)                    gl3wClearNamedFramebufferuiv(__VA_ARGS__); checkglerr();
#define glClearStencil(...)                                gl3wClearStencil(__VA_ARGS__); checkglerr();
#define glClearTexImage(...)                               gl3wClearTexImage(__VA_ARGS__); checkglerr();
#define glClearTexSubImage(...)                            gl3wClearTexSubImage(__VA_ARGS__); checkglerr();
#define glClientWaitSync(...)                              gl3wClientWaitSync(__VA_ARGS__); checkglerr();
#define glClipControl(...)                                 gl3wClipControl(__VA_ARGS__); checkglerr();
#define glColorMask(...)                                   gl3wColorMask(__VA_ARGS__); checkglerr();
#define glColorMaski(...)                                  gl3wColorMaski(__VA_ARGS__); checkglerr();
#define glCompileShader(...)                               gl3wCompileShader(__VA_ARGS__); checkglerr();
#define glCompileShaderIncludeARB(...)                     gl3wCompileShaderIncludeARB(__VA_ARGS__); checkglerr();
#define glCompressedTexImage1D(...)                        gl3wCompressedTexImage1D(__VA_ARGS__); checkglerr();
#define glCompressedTexImage2D(...)                        gl3wCompressedTexImage2D(__VA_ARGS__); checkglerr();
#define glCompressedTexImage3D(...)                        gl3wCompressedTexImage3D(__VA_ARGS__); checkglerr();
#define glCompressedTexSubImage1D(...)                     gl3wCompressedTexSubImage1D(__VA_ARGS__); checkglerr();
#define glCompressedTexSubImage2D(...)                     gl3wCompressedTexSubImage2D(__VA_ARGS__); checkglerr();
#define glCompressedTexSubImage3D(...)                     gl3wCompressedTexSubImage3D(__VA_ARGS__); checkglerr();
#define glCompressedTextureSubImage1D(...)                 gl3wCompressedTextureSubImage1D(__VA_ARGS__); checkglerr();
#define glCompressedTextureSubImage2D(...)                 gl3wCompressedTextureSubImage2D(__VA_ARGS__); checkglerr();
#define glCompressedTextureSubImage3D(...)                 gl3wCompressedTextureSubImage3D(__VA_ARGS__); checkglerr();
#define glCopyBufferSubData(...)                           gl3wCopyBufferSubData(__VA_ARGS__); checkglerr();
#define glCopyImageSubData(...)                            gl3wCopyImageSubData(__VA_ARGS__); checkglerr();
#define glCopyNamedBufferSubData(...)                      gl3wCopyNamedBufferSubData(__VA_ARGS__); checkglerr();
#define glCopyTexImage1D(...)                              gl3wCopyTexImage1D(__VA_ARGS__); checkglerr();
#define glCopyTexImage2D(...)                              gl3wCopyTexImage2D(__VA_ARGS__); checkglerr();
#define glCopyTexSubImage1D(...)                           gl3wCopyTexSubImage1D(__VA_ARGS__); checkglerr();
#define glCopyTexSubImage2D(...)                           gl3wCopyTexSubImage2D(__VA_ARGS__); checkglerr();
#define glCopyTexSubImage3D(...)                           gl3wCopyTexSubImage3D(__VA_ARGS__); checkglerr();
#define glCopyTextureSubImage1D(...)                       gl3wCopyTextureSubImage1D(__VA_ARGS__); checkglerr();
#define glCopyTextureSubImage2D(...)                       gl3wCopyTextureSubImage2D(__VA_ARGS__); checkglerr();
#define glCopyTextureSubImage3D(...)                       gl3wCopyTextureSubImage3D(__VA_ARGS__); checkglerr();
#define glCreateBuffers(...)                               gl3wCreateBuffers(__VA_ARGS__); checkglerr();
#define glCreateFramebuffers(...)                          gl3wCreateFramebuffers(__VA_ARGS__); checkglerr();
#define glCreateProgram(...)                               gl3wCreateProgram(__VA_ARGS__); checkglerr();
#define glCreateProgramPipelines(...)                      gl3wCreateProgramPipelines(__VA_ARGS__); checkglerr();
#define glCreateQueries(...)                               gl3wCreateQueries(__VA_ARGS__); checkglerr();
#define glCreateRenderbuffers(...)                         gl3wCreateRenderbuffers(__VA_ARGS__); checkglerr();
#define glCreateSamplers(...)                              gl3wCreateSamplers(__VA_ARGS__); checkglerr();
#define glCreateShader(...)                                gl3wCreateShader(__VA_ARGS__); checkglerr();
#define glCreateShaderProgramv(...)                        gl3wCreateShaderProgramv(__VA_ARGS__); checkglerr();
#define glCreateSyncFromCLeventARB(...)                    gl3wCreateSyncFromCLeventARB(__VA_ARGS__); checkglerr();
#define glCreateTextures(...)                              gl3wCreateTextures(__VA_ARGS__); checkglerr();
#define glCreateTransformFeedbacks(...)                    gl3wCreateTransformFeedbacks(__VA_ARGS__); checkglerr();
#define glCreateVertexArrays(...)                          gl3wCreateVertexArrays(__VA_ARGS__); checkglerr();
#define glCullFace(...)                                    gl3wCullFace(__VA_ARGS__); checkglerr();
#define glDebugMessageCallback(...)                        gl3wDebugMessageCallback(__VA_ARGS__); checkglerr();
#define glDebugMessageCallbackARB(...)                     gl3wDebugMessageCallbackARB(__VA_ARGS__); checkglerr();
#define glDebugMessageControl(...)                         gl3wDebugMessageControl(__VA_ARGS__); checkglerr();
#define glDebugMessageControlARB(...)                      gl3wDebugMessageControlARB(__VA_ARGS__); checkglerr();
#define glDebugMessageInsert(...)                          gl3wDebugMessageInsert(__VA_ARGS__); checkglerr();
#define glDebugMessageInsertARB(...)                       gl3wDebugMessageInsertARB(__VA_ARGS__); checkglerr();
#define glDeleteBuffers(...)                               gl3wDeleteBuffers(__VA_ARGS__); checkglerr();
#define glDeleteFramebuffers(...)                          gl3wDeleteFramebuffers(__VA_ARGS__); checkglerr();
#define glDeleteNamedStringARB(...)                        gl3wDeleteNamedStringARB(__VA_ARGS__); checkglerr();
#define glDeleteProgram(...)                               gl3wDeleteProgram(__VA_ARGS__); checkglerr();
#define glDeleteProgramPipelines(...)                      gl3wDeleteProgramPipelines(__VA_ARGS__); checkglerr();
#define glDeleteQueries(...)                               gl3wDeleteQueries(__VA_ARGS__); checkglerr();
#define glDeleteRenderbuffers(...)                         gl3wDeleteRenderbuffers(__VA_ARGS__); checkglerr();
#define glDeleteSamplers(...)                              gl3wDeleteSamplers(__VA_ARGS__); checkglerr();
#define glDeleteShader(...)                                gl3wDeleteShader(__VA_ARGS__); checkglerr();
#define glDeleteSync(...)                                  gl3wDeleteSync(__VA_ARGS__); checkglerr();
#define glDeleteTextures(...)                              gl3wDeleteTextures(__VA_ARGS__); checkglerr();
#define glDeleteTransformFeedbacks(...)                    gl3wDeleteTransformFeedbacks(__VA_ARGS__); checkglerr();
#define glDeleteVertexArrays(...)                          gl3wDeleteVertexArrays(__VA_ARGS__); checkglerr();
#define glDepthFunc(...)                                   gl3wDepthFunc(__VA_ARGS__); checkglerr();
#define glDepthMask(...)                                   gl3wDepthMask(__VA_ARGS__); checkglerr();
#define glDepthRange(...)                                  gl3wDepthRange(__VA_ARGS__); checkglerr();
#define glDepthRangeArrayv(...)                            gl3wDepthRangeArrayv(__VA_ARGS__); checkglerr();
#define glDepthRangeIndexed(...)                           gl3wDepthRangeIndexed(__VA_ARGS__); checkglerr();
#define glDepthRangef(...)                                 gl3wDepthRangef(__VA_ARGS__); checkglerr();
#define glDetachShader(...)                                gl3wDetachShader(__VA_ARGS__); checkglerr();
#define glDisable(...)                                     gl3wDisable(__VA_ARGS__); checkglerr();
#define glDisableVertexArrayAttrib(...)                    gl3wDisableVertexArrayAttrib(__VA_ARGS__); checkglerr();
#define glDisableVertexAttribArray(...)                    gl3wDisableVertexAttribArray(__VA_ARGS__); checkglerr();
#define glDisablei(...)                                    gl3wDisablei(__VA_ARGS__); checkglerr();
#define glDispatchCompute(...)                             gl3wDispatchCompute(__VA_ARGS__); checkglerr();
#define glDispatchComputeGroupSizeARB(...)                 gl3wDispatchComputeGroupSizeARB(__VA_ARGS__); checkglerr();
#define glDispatchComputeIndirect(...)                     gl3wDispatchComputeIndirect(__VA_ARGS__); checkglerr();
#define glDrawArrays(...)                                  gl3wDrawArrays(__VA_ARGS__); checkglerr();
#define glDrawArraysIndirect(...)                          gl3wDrawArraysIndirect(__VA_ARGS__); checkglerr();
#define glDrawArraysInstanced(...)                         gl3wDrawArraysInstanced(__VA_ARGS__); checkglerr();
#define glDrawArraysInstancedBaseInstance(...)             gl3wDrawArraysInstancedBaseInstance(__VA_ARGS__); checkglerr();
#define glDrawBuffer(...)                                  gl3wDrawBuffer(__VA_ARGS__); checkglerr();
#define glDrawBuffers(...)                                 gl3wDrawBuffers(__VA_ARGS__); checkglerr();
#define glDrawElements(...)                                gl3wDrawElements(__VA_ARGS__); checkglerr();
#define glDrawElementsBaseVertex(...)                      gl3wDrawElementsBaseVertex(__VA_ARGS__); checkglerr();
#define glDrawElementsIndirect(...)                        gl3wDrawElementsIndirect(__VA_ARGS__); checkglerr();
#define glDrawElementsInstanced(...)                       gl3wDrawElementsInstanced(__VA_ARGS__); checkglerr();
#define glDrawElementsInstancedBaseInstance(...)           gl3wDrawElementsInstancedBaseInstance(__VA_ARGS__); checkglerr();
#define glDrawElementsInstancedBaseVertex(...)             gl3wDrawElementsInstancedBaseVertex(__VA_ARGS__); checkglerr();
#define glDrawElementsInstancedBaseVertexBaseInstance(...) gl3wDrawElementsInstancedBaseVertexBaseInstance(__VA_ARGS__); checkglerr();
#define glDrawRangeElements(...)                           gl3wDrawRangeElements(__VA_ARGS__); checkglerr();
#define glDrawRangeElementsBaseVertex(...)                 gl3wDrawRangeElementsBaseVertex(__VA_ARGS__); checkglerr();
#define glDrawTransformFeedback(...)                       gl3wDrawTransformFeedback(__VA_ARGS__); checkglerr();
#define glDrawTransformFeedbackInstanced(...)              gl3wDrawTransformFeedbackInstanced(__VA_ARGS__); checkglerr();
#define glDrawTransformFeedbackStream(...)                 gl3wDrawTransformFeedbackStream(__VA_ARGS__); checkglerr();
#define glDrawTransformFeedbackStreamInstanced(...)        gl3wDrawTransformFeedbackStreamInstanced(__VA_ARGS__); checkglerr();
#define glEnable(...)                                      gl3wEnable(__VA_ARGS__); checkglerr();
#define glEnableVertexArrayAttrib(...)                     gl3wEnableVertexArrayAttrib(__VA_ARGS__); checkglerr();
#define glEnableVertexAttribArray(...)                     gl3wEnableVertexAttribArray(__VA_ARGS__); checkglerr();
#define glEnablei(...)                                     gl3wEnablei(__VA_ARGS__); checkglerr();
#define glEndConditionalRender(...)                        gl3wEndConditionalRender(__VA_ARGS__); checkglerr();
#define glEndQuery(...)                                    gl3wEndQuery(__VA_ARGS__); checkglerr();
#define glEndQueryIndexed(...)                             gl3wEndQueryIndexed(__VA_ARGS__); checkglerr();
#define glEndTransformFeedback(...)                        gl3wEndTransformFeedback(__VA_ARGS__); checkglerr();
#define glFenceSync(...)                                   gl3wFenceSync(__VA_ARGS__); checkglerr();
#define glFinish(...)                                      gl3wFinish(__VA_ARGS__); checkglerr();
#define glFlush(...)                                       gl3wFlush(__VA_ARGS__); checkglerr();
#define glFlushMappedBufferRange(...)                      gl3wFlushMappedBufferRange(__VA_ARGS__); checkglerr();
#define glFlushMappedNamedBufferRange(...)                 gl3wFlushMappedNamedBufferRange(__VA_ARGS__); checkglerr();
#define glFramebufferParameteri(...)                       gl3wFramebufferParameteri(__VA_ARGS__); checkglerr();
#define glFramebufferRenderbuffer(...)                     gl3wFramebufferRenderbuffer(__VA_ARGS__); checkglerr();
#define glFramebufferTexture(...)                          gl3wFramebufferTexture(__VA_ARGS__); checkglerr();
#define glFramebufferTexture1D(...)                        gl3wFramebufferTexture1D(__VA_ARGS__); checkglerr();
#define glFramebufferTexture2D(...)                        gl3wFramebufferTexture2D(__VA_ARGS__); checkglerr();
#define glFramebufferTexture3D(...)                        gl3wFramebufferTexture3D(__VA_ARGS__); checkglerr();
#define glFramebufferTextureLayer(...)                     gl3wFramebufferTextureLayer(__VA_ARGS__); checkglerr();
#define glFrontFace(...)                                   gl3wFrontFace(__VA_ARGS__); checkglerr();

#define glGenerateMipmap(...)                              gl3wGenerateMipmap(__VA_ARGS__); checkglerr();
#define glGenerateTextureMipmap(...)                       gl3wGenerateTextureMipmap(__VA_ARGS__); checkglerr();

#define glHint(...)                                        gl3wHint(__VA_ARGS__); checkglerr();
#define glInvalidateBufferData(...)                        gl3wInvalidateBufferData(__VA_ARGS__); checkglerr();
#define glInvalidateBufferSubData(...)                     gl3wInvalidateBufferSubData(__VA_ARGS__); checkglerr();
#define glInvalidateFramebuffer(...)                       gl3wInvalidateFramebuffer(__VA_ARGS__); checkglerr();
#define glInvalidateNamedFramebufferData(...)              gl3wInvalidateNamedFramebufferData(__VA_ARGS__); checkglerr();
#define glInvalidateNamedFramebufferSubData(...)           gl3wInvalidateNamedFramebufferSubData(__VA_ARGS__); checkglerr();
#define glInvalidateSubFramebuffer(...)                    gl3wInvalidateSubFramebuffer(__VA_ARGS__); checkglerr();
#define glInvalidateTexImage(...)                          gl3wInvalidateTexImage(__VA_ARGS__); checkglerr();
#define glInvalidateTexSubImage(...)                       gl3wInvalidateTexSubImage(__VA_ARGS__); checkglerr();
#define glIsBuffer(...)                                    gl3wIsBuffer(__VA_ARGS__); checkglerr();
#define glIsEnabled(...)                                   gl3wIsEnabled(__VA_ARGS__); checkglerr();
#define glIsEnabledi(...)                                  gl3wIsEnabledi(__VA_ARGS__); checkglerr();
#define glIsFramebuffer(...)                               gl3wIsFramebuffer(__VA_ARGS__); checkglerr();
#define glIsImageHandleResidentARB(...)                    gl3wIsImageHandleResidentARB(__VA_ARGS__); checkglerr();
#define glIsNamedStringARB(...)                            gl3wIsNamedStringARB(__VA_ARGS__); checkglerr();
#define glIsProgram(...)                                   gl3wIsProgram(__VA_ARGS__); checkglerr();
#define glIsProgramPipeline(...)                           gl3wIsProgramPipeline(__VA_ARGS__); checkglerr();
#define glIsQuery(...)                                     gl3wIsQuery(__VA_ARGS__); checkglerr();
#define glIsRenderbuffer(...)                              gl3wIsRenderbuffer(__VA_ARGS__); checkglerr();
#define glIsSampler(...)                                   gl3wIsSampler(__VA_ARGS__); checkglerr();
#define glIsShader(...)                                    gl3wIsShader(__VA_ARGS__); checkglerr();
#define glIsSync(...)                                      gl3wIsSync(__VA_ARGS__); checkglerr();
#define glIsTexture(...)                                   gl3wIsTexture(__VA_ARGS__); checkglerr();
#define glIsTextureHandleResidentARB(...)                  gl3wIsTextureHandleResidentARB(__VA_ARGS__); checkglerr();
#define glIsTransformFeedback(...)                         gl3wIsTransformFeedback(__VA_ARGS__); checkglerr();
#define glIsVertexArray(...)                               gl3wIsVertexArray(__VA_ARGS__); checkglerr();
#define glLineWidth(...)                                   gl3wLineWidth(__VA_ARGS__); checkglerr();
#define glLinkProgram(...)                                 gl3wLinkProgram(__VA_ARGS__); checkglerr();
#define glLogicOp(...)                                     gl3wLogicOp(__VA_ARGS__); checkglerr();
#define glMakeImageHandleNonResidentARB(...)               gl3wMakeImageHandleNonResidentARB(__VA_ARGS__); checkglerr();
#define glMakeImageHandleResidentARB(...)                  gl3wMakeImageHandleResidentARB(__VA_ARGS__); checkglerr();
#define glMakeTextureHandleNonResidentARB(...)             gl3wMakeTextureHandleNonResidentARB(__VA_ARGS__); checkglerr();
#define glMakeTextureHandleResidentARB(...)                gl3wMakeTextureHandleResidentARB(__VA_ARGS__); checkglerr();
#define glMapBuffer(...)                                   gl3wMapBuffer(__VA_ARGS__); checkglerr();
#define glMapBufferRange(...)                              gl3wMapBufferRange(__VA_ARGS__); checkglerr();
#define glMapNamedBuffer(...)                              gl3wMapNamedBuffer(__VA_ARGS__); checkglerr();
#define glMapNamedBufferRange(...)                         gl3wMapNamedBufferRange(__VA_ARGS__); checkglerr();
#define glMemoryBarrier(...)                               gl3wMemoryBarrier(__VA_ARGS__); checkglerr();
#define glMemoryBarrierByRegion(...)                       gl3wMemoryBarrierByRegion(__VA_ARGS__); checkglerr();
#define glMinSampleShading(...)                            gl3wMinSampleShading(__VA_ARGS__); checkglerr();
#define glMinSampleShadingARB(...)                         gl3wMinSampleShadingARB(__VA_ARGS__); checkglerr();
#define glMultiDrawArrays(...)                             gl3wMultiDrawArrays(__VA_ARGS__); checkglerr();
#define glMultiDrawArraysIndirect(...)                     gl3wMultiDrawArraysIndirect(__VA_ARGS__); checkglerr();
#define glMultiDrawArraysIndirectCountARB(...)             gl3wMultiDrawArraysIndirectCountARB(__VA_ARGS__); checkglerr();
#define glMultiDrawElements(...)                           gl3wMultiDrawElements(__VA_ARGS__); checkglerr();
#define glMultiDrawElementsBaseVertex(...)                 gl3wMultiDrawElementsBaseVertex(__VA_ARGS__); checkglerr();
#define glMultiDrawElementsIndirect(...)                   gl3wMultiDrawElementsIndirect(__VA_ARGS__); checkglerr();
#define glMultiDrawElementsIndirectCountARB(...)           gl3wMultiDrawElementsIndirectCountARB(__VA_ARGS__); checkglerr();
#define glNamedBufferData(...)                             gl3wNamedBufferData(__VA_ARGS__); checkglerr();
#define glNamedBufferPageCommitmentARB(...)                gl3wNamedBufferPageCommitmentARB(__VA_ARGS__); checkglerr();
#define glNamedBufferPageCommitmentEXT(...)                gl3wNamedBufferPageCommitmentEXT(__VA_ARGS__); checkglerr();
#define glNamedBufferStorage(...)                          gl3wNamedBufferStorage(__VA_ARGS__); checkglerr();
#define glNamedBufferSubData(...)                          gl3wNamedBufferSubData(__VA_ARGS__); checkglerr();
#define glNamedFramebufferDrawBuffer(...)                  gl3wNamedFramebufferDrawBuffer(__VA_ARGS__); checkglerr();
#define glNamedFramebufferDrawBuffers(...)                 gl3wNamedFramebufferDrawBuffers(__VA_ARGS__); checkglerr();
#define glNamedFramebufferParameteri(...)                  gl3wNamedFramebufferParameteri(__VA_ARGS__); checkglerr();
#define glNamedFramebufferReadBuffer(...)                  gl3wNamedFramebufferReadBuffer(__VA_ARGS__); checkglerr();
#define glNamedFramebufferRenderbuffer(...)                gl3wNamedFramebufferRenderbuffer(__VA_ARGS__); checkglerr();
#define glNamedFramebufferTexture(...)                     gl3wNamedFramebufferTexture(__VA_ARGS__); checkglerr();
#define glNamedFramebufferTextureLayer(...)                gl3wNamedFramebufferTextureLayer(__VA_ARGS__); checkglerr();
#define glNamedRenderbufferStorage(...)                    gl3wNamedRenderbufferStorage(__VA_ARGS__); checkglerr();
#define glNamedRenderbufferStorageMultisample(...)         gl3wNamedRenderbufferStorageMultisample(__VA_ARGS__); checkglerr();
#define glNamedStringARB(...)                              gl3wNamedStringARB(__VA_ARGS__); checkglerr();
#define glObjectLabel(...)                                 gl3wObjectLabel(__VA_ARGS__); checkglerr();
#define glObjectPtrLabel(...)                              gl3wObjectPtrLabel(__VA_ARGS__); checkglerr();
#define glPatchParameterfv(...)                            gl3wPatchParameterfv(__VA_ARGS__); checkglerr();
#define glPatchParameteri(...)                             gl3wPatchParameteri(__VA_ARGS__); checkglerr();
#define glPauseTransformFeedback(...)                      gl3wPauseTransformFeedback(__VA_ARGS__); checkglerr();
#define glPixelStoref(...)                                 gl3wPixelStoref(__VA_ARGS__); checkglerr();
#define glPixelStorei(...)                                 gl3wPixelStorei(__VA_ARGS__); checkglerr();
#define glPointParameterf(...)                             gl3wPointParameterf(__VA_ARGS__); checkglerr();
#define glPointParameterfv(...)                            gl3wPointParameterfv(__VA_ARGS__); checkglerr();
#define glPointParameteri(...)                             gl3wPointParameteri(__VA_ARGS__); checkglerr();
#define glPointParameteriv(...)                            gl3wPointParameteriv(__VA_ARGS__); checkglerr();
#define glPointSize(...)                                   gl3wPointSize(__VA_ARGS__); checkglerr();
#define glPolygonMode(...)                                 gl3wPolygonMode(__VA_ARGS__); checkglerr();
#define glPolygonOffset(...)                               gl3wPolygonOffset(__VA_ARGS__); checkglerr();
#define glPopDebugGroup(...)                               gl3wPopDebugGroup(__VA_ARGS__); checkglerr();
#define glPrimitiveRestartIndex(...)                       gl3wPrimitiveRestartIndex(__VA_ARGS__); checkglerr();
#define glProgramBinary(...)                               gl3wProgramBinary(__VA_ARGS__); checkglerr();
#define glProgramParameteri(...)                           gl3wProgramParameteri(__VA_ARGS__); checkglerr();
#define glProgramUniform1d(...)                            gl3wProgramUniform1d(__VA_ARGS__); checkglerr();
#define glProgramUniform1dv(...)                           gl3wProgramUniform1dv(__VA_ARGS__); checkglerr();
#define glProgramUniform1f(...)                            gl3wProgramUniform1f(__VA_ARGS__); checkglerr();
#define glProgramUniform1fv(...)                           gl3wProgramUniform1fv(__VA_ARGS__); checkglerr();
#define glProgramUniform1i(...)                            gl3wProgramUniform1i(__VA_ARGS__); checkglerr();
#define glProgramUniform1iv(...)                           gl3wProgramUniform1iv(__VA_ARGS__); checkglerr();
#define glProgramUniform1ui(...)                           gl3wProgramUniform1ui(__VA_ARGS__); checkglerr();
#define glProgramUniform1uiv(...)                          gl3wProgramUniform1uiv(__VA_ARGS__); checkglerr();
#define glProgramUniform2d(...)                            gl3wProgramUniform2d(__VA_ARGS__); checkglerr();
#define glProgramUniform2dv(...)                           gl3wProgramUniform2dv(__VA_ARGS__); checkglerr();
#define glProgramUniform2f(...)                            gl3wProgramUniform2f(__VA_ARGS__); checkglerr();
#define glProgramUniform2fv(...)                           gl3wProgramUniform2fv(__VA_ARGS__); checkglerr();
#define glProgramUniform2i(...)                            gl3wProgramUniform2i(__VA_ARGS__); checkglerr();
#define glProgramUniform2iv(...)                           gl3wProgramUniform2iv(__VA_ARGS__); checkglerr();
#define glProgramUniform2ui(...)                           gl3wProgramUniform2ui(__VA_ARGS__); checkglerr();
#define glProgramUniform2uiv(...)                          gl3wProgramUniform2uiv(__VA_ARGS__); checkglerr();
#define glProgramUniform3d(...)                            gl3wProgramUniform3d(__VA_ARGS__); checkglerr();
#define glProgramUniform3dv(...)                           gl3wProgramUniform3dv(__VA_ARGS__); checkglerr();
#define glProgramUniform3f(...)                            gl3wProgramUniform3f(__VA_ARGS__); checkglerr();
#define glProgramUniform3fv(...)                           gl3wProgramUniform3fv(__VA_ARGS__); checkglerr();
#define glProgramUniform3i(...)                            gl3wProgramUniform3i(__VA_ARGS__); checkglerr();
#define glProgramUniform3iv(...)                           gl3wProgramUniform3iv(__VA_ARGS__); checkglerr();
#define glProgramUniform3ui(...)                           gl3wProgramUniform3ui(__VA_ARGS__); checkglerr();
#define glProgramUniform3uiv(...)                          gl3wProgramUniform3uiv(__VA_ARGS__); checkglerr();
#define glProgramUniform4d(...)                            gl3wProgramUniform4d(__VA_ARGS__); checkglerr();
#define glProgramUniform4dv(...)                           gl3wProgramUniform4dv(__VA_ARGS__); checkglerr();
#define glProgramUniform4f(...)                            gl3wProgramUniform4f(__VA_ARGS__); checkglerr();
#define glProgramUniform4fv(...)                           gl3wProgramUniform4fv(__VA_ARGS__); checkglerr();
#define glProgramUniform4i(...)                            gl3wProgramUniform4i(__VA_ARGS__); checkglerr();
#define glProgramUniform4iv(...)                           gl3wProgramUniform4iv(__VA_ARGS__); checkglerr();
#define glProgramUniform4ui(...)                           gl3wProgramUniform4ui(__VA_ARGS__); checkglerr();
#define glProgramUniform4uiv(...)                          gl3wProgramUniform4uiv(__VA_ARGS__); checkglerr();
#define glProgramUniformHandleui64ARB(...)                 gl3wProgramUniformHandleui64ARB(__VA_ARGS__); checkglerr();
#define glProgramUniformHandleui64vARB(...)                gl3wProgramUniformHandleui64vARB(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix2dv(...)                     gl3wProgramUniformMatrix2dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix2fv(...)                     gl3wProgramUniformMatrix2fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix2x3dv(...)                   gl3wProgramUniformMatrix2x3dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix2x3fv(...)                   gl3wProgramUniformMatrix2x3fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix2x4dv(...)                   gl3wProgramUniformMatrix2x4dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix2x4fv(...)                   gl3wProgramUniformMatrix2x4fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix3dv(...)                     gl3wProgramUniformMatrix3dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix3fv(...)                     gl3wProgramUniformMatrix3fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix3x2dv(...)                   gl3wProgramUniformMatrix3x2dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix3x2fv(...)                   gl3wProgramUniformMatrix3x2fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix3x4dv(...)                   gl3wProgramUniformMatrix3x4dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix3x4fv(...)                   gl3wProgramUniformMatrix3x4fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix4dv(...)                     gl3wProgramUniformMatrix4dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix4fv(...)                     gl3wProgramUniformMatrix4fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix4x2dv(...)                   gl3wProgramUniformMatrix4x2dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix4x2fv(...)                   gl3wProgramUniformMatrix4x2fv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix4x3dv(...)                   gl3wProgramUniformMatrix4x3dv(__VA_ARGS__); checkglerr();
#define glProgramUniformMatrix4x3fv(...)                   gl3wProgramUniformMatrix4x3fv(__VA_ARGS__); checkglerr();
#define glProvokingVertex(...)                             gl3wProvokingVertex(__VA_ARGS__); checkglerr();
#define glPushDebugGroup(...)                              gl3wPushDebugGroup(__VA_ARGS__); checkglerr();
#define glQueryCounter(...)                                gl3wQueryCounter(__VA_ARGS__); checkglerr();
#define glReadBuffer(...)                                  gl3wReadBuffer(__VA_ARGS__); checkglerr();
#define glReadPixels(...)                                  gl3wReadPixels(__VA_ARGS__); checkglerr();
#define glReadnPixels(...)                                 gl3wReadnPixels(__VA_ARGS__); checkglerr();
#define glReadnPixelsARB(...)                              gl3wReadnPixelsARB(__VA_ARGS__); checkglerr();
#define glReleaseShaderCompiler(...)                       gl3wReleaseShaderCompiler(__VA_ARGS__); checkglerr();
#define glRenderbufferStorage(...)                         gl3wRenderbufferStorage(__VA_ARGS__); checkglerr();
#define glRenderbufferStorageMultisample(...)              gl3wRenderbufferStorageMultisample(__VA_ARGS__); checkglerr();
#define glResumeTransformFeedback(...)                     gl3wResumeTransformFeedback(__VA_ARGS__); checkglerr();
#define glSampleCoverage(...)                              gl3wSampleCoverage(__VA_ARGS__); checkglerr();
#define glSampleMaski(...)                                 gl3wSampleMaski(__VA_ARGS__); checkglerr();
#define glSamplerParameterIiv(...)                         gl3wSamplerParameterIiv(__VA_ARGS__); checkglerr();
#define glSamplerParameterIuiv(...)                        gl3wSamplerParameterIuiv(__VA_ARGS__); checkglerr();
#define glSamplerParameterf(...)                           gl3wSamplerParameterf(__VA_ARGS__); checkglerr();
#define glSamplerParameterfv(...)                          gl3wSamplerParameterfv(__VA_ARGS__); checkglerr();
#define glSamplerParameteri(...)                           gl3wSamplerParameteri(__VA_ARGS__); checkglerr();
#define glSamplerParameteriv(...)                          gl3wSamplerParameteriv(__VA_ARGS__); checkglerr();
#define glScissor(...)                                     gl3wScissor(__VA_ARGS__); checkglerr();
#define glScissorArrayv(...)                               gl3wScissorArrayv(__VA_ARGS__); checkglerr();
#define glScissorIndexed(...)                              gl3wScissorIndexed(__VA_ARGS__); checkglerr();
#define glScissorIndexedv(...)                             gl3wScissorIndexedv(__VA_ARGS__); checkglerr();
#define glShaderBinary(...)                                gl3wShaderBinary(__VA_ARGS__); checkglerr();
#define glShaderSource(...)                                gl3wShaderSource(__VA_ARGS__); checkglerr();
#define glShaderStorageBlockBinding(...)                   gl3wShaderStorageBlockBinding(__VA_ARGS__); checkglerr();
#define glStencilFunc(...)                                 gl3wStencilFunc(__VA_ARGS__); checkglerr();
#define glStencilFuncSeparate(...)                         gl3wStencilFuncSeparate(__VA_ARGS__); checkglerr();
#define glStencilMask(...)                                 gl3wStencilMask(__VA_ARGS__); checkglerr();
#define glStencilMaskSeparate(...)                         gl3wStencilMaskSeparate(__VA_ARGS__); checkglerr();
#define glStencilOp(...)                                   gl3wStencilOp(__VA_ARGS__); checkglerr();
#define glStencilOpSeparate(...)                           gl3wStencilOpSeparate(__VA_ARGS__); checkglerr();
#define glTexBuffer(...)                                   gl3wTexBuffer(__VA_ARGS__); checkglerr();
#define glTexBufferRange(...)                              gl3wTexBufferRange(__VA_ARGS__); checkglerr();
#define glTexImage1D(...)                                  gl3wTexImage1D(__VA_ARGS__); checkglerr();
#define glTexImage2D(...)                                  gl3wTexImage2D(__VA_ARGS__); checkglerr();
#define glTexImage2DMultisample(...)                       gl3wTexImage2DMultisample(__VA_ARGS__); checkglerr();
#define glTexImage3D(...)                                  gl3wTexImage3D(__VA_ARGS__); checkglerr();
#define glTexImage3DMultisample(...)                       gl3wTexImage3DMultisample(__VA_ARGS__); checkglerr();
#define glTexPageCommitmentARB(...)                        gl3wTexPageCommitmentARB(__VA_ARGS__); checkglerr();
#define glTexParameterIiv(...)                             gl3wTexParameterIiv(__VA_ARGS__); checkglerr();
#define glTexParameterIuiv(...)                            gl3wTexParameterIuiv(__VA_ARGS__); checkglerr();
#define glTexParameterf(...)                               gl3wTexParameterf(__VA_ARGS__); checkglerr();
#define glTexParameterfv(...)                              gl3wTexParameterfv(__VA_ARGS__); checkglerr();
#define glTexParameteri(...)                               gl3wTexParameteri(__VA_ARGS__); checkglerr();
#define glTexParameteriv(...)                              gl3wTexParameteriv(__VA_ARGS__); checkglerr();
#define glTexStorage1D(...)                                gl3wTexStorage1D(__VA_ARGS__); checkglerr();
#define glTexStorage2D(...)                                gl3wTexStorage2D(__VA_ARGS__); checkglerr();
#define glTexStorage2DMultisample(...)                     gl3wTexStorage2DMultisample(__VA_ARGS__); checkglerr();
#define glTexStorage3D(...)                                gl3wTexStorage3D(__VA_ARGS__); checkglerr();
#define glTexStorage3DMultisample(...)                     gl3wTexStorage3DMultisample(__VA_ARGS__); checkglerr();
#define glTexSubImage1D(...)                               gl3wTexSubImage1D(__VA_ARGS__); checkglerr();
#define glTexSubImage2D(...)                               gl3wTexSubImage2D(__VA_ARGS__); checkglerr();
#define glTexSubImage3D(...)                               gl3wTexSubImage3D(__VA_ARGS__); checkglerr();
#define glTextureBarrier(...)                              gl3wTextureBarrier(__VA_ARGS__); checkglerr();
#define glTextureBuffer(...)                               gl3wTextureBuffer(__VA_ARGS__); checkglerr();
#define glTextureBufferRange(...)                          gl3wTextureBufferRange(__VA_ARGS__); checkglerr();
#define glTextureParameterIiv(...)                         gl3wTextureParameterIiv(__VA_ARGS__); checkglerr();
#define glTextureParameterIuiv(...)                        gl3wTextureParameterIuiv(__VA_ARGS__); checkglerr();
#define glTextureParameterf(...)                           gl3wTextureParameterf(__VA_ARGS__); checkglerr();
#define glTextureParameterfv(...)                          gl3wTextureParameterfv(__VA_ARGS__); checkglerr();
#define glTextureParameteri(...)                           gl3wTextureParameteri(__VA_ARGS__); checkglerr();
#define glTextureParameteriv(...)                          gl3wTextureParameteriv(__VA_ARGS__); checkglerr();
#define glTextureStorage1D(...)                            gl3wTextureStorage1D(__VA_ARGS__); checkglerr();
#define glTextureStorage2D(...)                            gl3wTextureStorage2D(__VA_ARGS__); checkglerr();
#define glTextureStorage2DMultisample(...)                 gl3wTextureStorage2DMultisample(__VA_ARGS__); checkglerr();
#define glTextureStorage3D(...)                            gl3wTextureStorage3D(__VA_ARGS__); checkglerr();
#define glTextureStorage3DMultisample(...)                 gl3wTextureStorage3DMultisample(__VA_ARGS__); checkglerr();
#define glTextureSubImage1D(...)                           gl3wTextureSubImage1D(__VA_ARGS__); checkglerr();
#define glTextureSubImage2D(...)                           gl3wTextureSubImage2D(__VA_ARGS__); checkglerr();
#define glTextureSubImage3D(...)                           gl3wTextureSubImage3D(__VA_ARGS__); checkglerr();
#define glTextureView(...)                                 gl3wTextureView(__VA_ARGS__); checkglerr();
#define glTransformFeedbackBufferBase(...)                 gl3wTransformFeedbackBufferBase(__VA_ARGS__); checkglerr();
#define glTransformFeedbackBufferRange(...)                gl3wTransformFeedbackBufferRange(__VA_ARGS__); checkglerr();
#define glTransformFeedbackVaryings(...)                   gl3wTransformFeedbackVaryings(__VA_ARGS__); checkglerr();
#define glUniform1d(...)                                   gl3wUniform1d(__VA_ARGS__); checkglerr();
#define glUniform1dv(...)                                  gl3wUniform1dv(__VA_ARGS__); checkglerr();
#define glUniform1f(...)                                   gl3wUniform1f(__VA_ARGS__); checkglerr();
#define glUniform1fv(...)                                  gl3wUniform1fv(__VA_ARGS__); checkglerr();
#define glUniform1i(...)                                   gl3wUniform1i(__VA_ARGS__); checkglerr();
#define glUniform1iv(...)                                  gl3wUniform1iv(__VA_ARGS__); checkglerr();
#define glUniform1ui(...)                                  gl3wUniform1ui(__VA_ARGS__); checkglerr();
#define glUniform1uiv(...)                                 gl3wUniform1uiv(__VA_ARGS__); checkglerr();
#define glUniform2d(...)                                   gl3wUniform2d(__VA_ARGS__); checkglerr();
#define glUniform2dv(...)                                  gl3wUniform2dv(__VA_ARGS__); checkglerr();
#define glUniform2f(...)                                   gl3wUniform2f(__VA_ARGS__); checkglerr();
#define glUniform2fv(...)                                  gl3wUniform2fv(__VA_ARGS__); checkglerr();
#define glUniform2i(...)                                   gl3wUniform2i(__VA_ARGS__); checkglerr();
#define glUniform2iv(...)                                  gl3wUniform2iv(__VA_ARGS__); checkglerr();
#define glUniform2ui(...)                                  gl3wUniform2ui(__VA_ARGS__); checkglerr();
#define glUniform2uiv(...)                                 gl3wUniform2uiv(__VA_ARGS__); checkglerr();
#define glUniform3d(...)                                   gl3wUniform3d(__VA_ARGS__); checkglerr();
#define glUniform3dv(...)                                  gl3wUniform3dv(__VA_ARGS__); checkglerr();
#define glUniform3f(...)                                   gl3wUniform3f(__VA_ARGS__); checkglerr();
#define glUniform3fv(...)                                  gl3wUniform3fv(__VA_ARGS__); checkglerr();
#define glUniform3i(...)                                   gl3wUniform3i(__VA_ARGS__); checkglerr();
#define glUniform3iv(...)                                  gl3wUniform3iv(__VA_ARGS__); checkglerr();
#define glUniform3ui(...)                                  gl3wUniform3ui(__VA_ARGS__); checkglerr();
#define glUniform3uiv(...)                                 gl3wUniform3uiv(__VA_ARGS__); checkglerr();
#define glUniform4d(...)                                   gl3wUniform4d(__VA_ARGS__); checkglerr();
#define glUniform4dv(...)                                  gl3wUniform4dv(__VA_ARGS__); checkglerr();
#define glUniform4f(...)                                   gl3wUniform4f(__VA_ARGS__); checkglerr();
#define glUniform4fv(...)                                  gl3wUniform4fv(__VA_ARGS__); checkglerr();
#define glUniform4i(...)                                   gl3wUniform4i(__VA_ARGS__); checkglerr();
#define glUniform4iv(...)                                  gl3wUniform4iv(__VA_ARGS__); checkglerr();
#define glUniform4ui(...)                                  gl3wUniform4ui(__VA_ARGS__); checkglerr();
#define glUniform4uiv(...)                                 gl3wUniform4uiv(__VA_ARGS__); checkglerr();
#define glUniformBlockBinding(...)                         gl3wUniformBlockBinding(__VA_ARGS__); checkglerr();
#define glUniformHandleui64ARB(...)                        gl3wUniformHandleui64ARB(__VA_ARGS__); checkglerr();
#define glUniformHandleui64vARB(...)                       gl3wUniformHandleui64vARB(__VA_ARGS__); checkglerr();
#define glUniformMatrix2dv(...)                            gl3wUniformMatrix2dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix2fv(...)                            gl3wUniformMatrix2fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix2x3dv(...)                          gl3wUniformMatrix2x3dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix2x3fv(...)                          gl3wUniformMatrix2x3fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix2x4dv(...)                          gl3wUniformMatrix2x4dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix2x4fv(...)                          gl3wUniformMatrix2x4fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix3dv(...)                            gl3wUniformMatrix3dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix3fv(...)                            gl3wUniformMatrix3fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix3x2dv(...)                          gl3wUniformMatrix3x2dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix3x2fv(...)                          gl3wUniformMatrix3x2fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix3x4dv(...)                          gl3wUniformMatrix3x4dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix3x4fv(...)                          gl3wUniformMatrix3x4fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix4dv(...)                            gl3wUniformMatrix4dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix4fv(...)                            gl3wUniformMatrix4fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix4x2dv(...)                          gl3wUniformMatrix4x2dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix4x2fv(...)                          gl3wUniformMatrix4x2fv(__VA_ARGS__); checkglerr();
#define glUniformMatrix4x3dv(...)                          gl3wUniformMatrix4x3dv(__VA_ARGS__); checkglerr();
#define glUniformMatrix4x3fv(...)                          gl3wUniformMatrix4x3fv(__VA_ARGS__); checkglerr();
#define glUniformSubroutinesuiv(...)                       gl3wUniformSubroutinesuiv(__VA_ARGS__); checkglerr();
#define glUnmapBuffer(...)                                 gl3wUnmapBuffer(__VA_ARGS__); checkglerr();
#define glUnmapNamedBuffer(...)                            gl3wUnmapNamedBuffer(__VA_ARGS__); checkglerr();
#define glUseProgram(...)                                  gl3wUseProgram(__VA_ARGS__); checkglerr();
#define glUseProgramStages(...)                            gl3wUseProgramStages(__VA_ARGS__); checkglerr();
#define glValidateProgram(...)                             gl3wValidateProgram(__VA_ARGS__); checkglerr();
#define glValidateProgramPipeline(...)                     gl3wValidateProgramPipeline(__VA_ARGS__); checkglerr();
#define glVertexArrayAttribBinding(...)                    gl3wVertexArrayAttribBinding(__VA_ARGS__); checkglerr();
#define glVertexArrayAttribFormat(...)                     gl3wVertexArrayAttribFormat(__VA_ARGS__); checkglerr();
#define glVertexArrayAttribIFormat(...)                    gl3wVertexArrayAttribIFormat(__VA_ARGS__); checkglerr();
#define glVertexArrayAttribLFormat(...)                    gl3wVertexArrayAttribLFormat(__VA_ARGS__); checkglerr();
#define glVertexArrayBindingDivisor(...)                   gl3wVertexArrayBindingDivisor(__VA_ARGS__); checkglerr();
#define glVertexArrayElementBuffer(...)                    gl3wVertexArrayElementBuffer(__VA_ARGS__); checkglerr();
#define glVertexArrayVertexBuffer(...)                     gl3wVertexArrayVertexBuffer(__VA_ARGS__); checkglerr();
#define glVertexArrayVertexBuffers(...)                    gl3wVertexArrayVertexBuffers(__VA_ARGS__); checkglerr();
#define glVertexAttrib1d(...)                              gl3wVertexAttrib1d(__VA_ARGS__); checkglerr();
#define glVertexAttrib1dv(...)                             gl3wVertexAttrib1dv(__VA_ARGS__); checkglerr();
#define glVertexAttrib1f(...)                              gl3wVertexAttrib1f(__VA_ARGS__); checkglerr();
#define glVertexAttrib1fv(...)                             gl3wVertexAttrib1fv(__VA_ARGS__); checkglerr();
#define glVertexAttrib1s(...)                              gl3wVertexAttrib1s(__VA_ARGS__); checkglerr();
#define glVertexAttrib1sv(...)                             gl3wVertexAttrib1sv(__VA_ARGS__); checkglerr();
#define glVertexAttrib2d(...)                              gl3wVertexAttrib2d(__VA_ARGS__); checkglerr();
#define glVertexAttrib2dv(...)                             gl3wVertexAttrib2dv(__VA_ARGS__); checkglerr();
#define glVertexAttrib2f(...)                              gl3wVertexAttrib2f(__VA_ARGS__); checkglerr();
#define glVertexAttrib2fv(...)                             gl3wVertexAttrib2fv(__VA_ARGS__); checkglerr();
#define glVertexAttrib2s(...)                              gl3wVertexAttrib2s(__VA_ARGS__); checkglerr();
#define glVertexAttrib2sv(...)                             gl3wVertexAttrib2sv(__VA_ARGS__); checkglerr();
#define glVertexAttrib3d(...)                              gl3wVertexAttrib3d(__VA_ARGS__); checkglerr();
#define glVertexAttrib3dv(...)                             gl3wVertexAttrib3dv(__VA_ARGS__); checkglerr();
#define glVertexAttrib3f(...)                              gl3wVertexAttrib3f(__VA_ARGS__); checkglerr();
#define glVertexAttrib3fv(...)                             gl3wVertexAttrib3fv(__VA_ARGS__); checkglerr();
#define glVertexAttrib3s(...)                              gl3wVertexAttrib3s(__VA_ARGS__); checkglerr();
#define glVertexAttrib3sv(...)                             gl3wVertexAttrib3sv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4Nbv(...)                            gl3wVertexAttrib4Nbv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4Niv(...)                            gl3wVertexAttrib4Niv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4Nsv(...)                            gl3wVertexAttrib4Nsv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4Nub(...)                            gl3wVertexAttrib4Nub(__VA_ARGS__); checkglerr();
#define glVertexAttrib4Nubv(...)                           gl3wVertexAttrib4Nubv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4Nuiv(...)                           gl3wVertexAttrib4Nuiv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4Nusv(...)                           gl3wVertexAttrib4Nusv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4bv(...)                             gl3wVertexAttrib4bv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4d(...)                              gl3wVertexAttrib4d(__VA_ARGS__); checkglerr();
#define glVertexAttrib4dv(...)                             gl3wVertexAttrib4dv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4f(...)                              gl3wVertexAttrib4f(__VA_ARGS__); checkglerr();
#define glVertexAttrib4fv(...)                             gl3wVertexAttrib4fv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4iv(...)                             gl3wVertexAttrib4iv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4s(...)                              gl3wVertexAttrib4s(__VA_ARGS__); checkglerr();
#define glVertexAttrib4sv(...)                             gl3wVertexAttrib4sv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4ubv(...)                            gl3wVertexAttrib4ubv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4uiv(...)                            gl3wVertexAttrib4uiv(__VA_ARGS__); checkglerr();
#define glVertexAttrib4usv(...)                            gl3wVertexAttrib4usv(__VA_ARGS__); checkglerr();
#define glVertexAttribBinding(...)                         gl3wVertexAttribBinding(__VA_ARGS__); checkglerr();
#define glVertexAttribDivisor(...)                         gl3wVertexAttribDivisor(__VA_ARGS__); checkglerr();
#define glVertexAttribFormat(...)                          gl3wVertexAttribFormat(__VA_ARGS__); checkglerr();
#define glVertexAttribI1i(...)                             gl3wVertexAttribI1i(__VA_ARGS__); checkglerr();
#define glVertexAttribI1iv(...)                            gl3wVertexAttribI1iv(__VA_ARGS__); checkglerr();
#define glVertexAttribI1ui(...)                            gl3wVertexAttribI1ui(__VA_ARGS__); checkglerr();
#define glVertexAttribI1uiv(...)                           gl3wVertexAttribI1uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribI2i(...)                             gl3wVertexAttribI2i(__VA_ARGS__); checkglerr();
#define glVertexAttribI2iv(...)                            gl3wVertexAttribI2iv(__VA_ARGS__); checkglerr();
#define glVertexAttribI2ui(...)                            gl3wVertexAttribI2ui(__VA_ARGS__); checkglerr();
#define glVertexAttribI2uiv(...)                           gl3wVertexAttribI2uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribI3i(...)                             gl3wVertexAttribI3i(__VA_ARGS__); checkglerr();
#define glVertexAttribI3iv(...)                            gl3wVertexAttribI3iv(__VA_ARGS__); checkglerr();
#define glVertexAttribI3ui(...)                            gl3wVertexAttribI3ui(__VA_ARGS__); checkglerr();
#define glVertexAttribI3uiv(...)                           gl3wVertexAttribI3uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribI4bv(...)                            gl3wVertexAttribI4bv(__VA_ARGS__); checkglerr();
#define glVertexAttribI4i(...)                             gl3wVertexAttribI4i(__VA_ARGS__); checkglerr();
#define glVertexAttribI4iv(...)                            gl3wVertexAttribI4iv(__VA_ARGS__); checkglerr();
#define glVertexAttribI4sv(...)                            gl3wVertexAttribI4sv(__VA_ARGS__); checkglerr();
#define glVertexAttribI4ubv(...)                           gl3wVertexAttribI4ubv(__VA_ARGS__); checkglerr();
#define glVertexAttribI4ui(...)                            gl3wVertexAttribI4ui(__VA_ARGS__); checkglerr();
#define glVertexAttribI4uiv(...)                           gl3wVertexAttribI4uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribI4usv(...)                           gl3wVertexAttribI4usv(__VA_ARGS__); checkglerr();
#define glVertexAttribIFormat(...)                         gl3wVertexAttribIFormat(__VA_ARGS__); checkglerr();
#define glVertexAttribIPointer(...)                        gl3wVertexAttribIPointer(__VA_ARGS__); checkglerr();
#define glVertexAttribL1d(...)                             gl3wVertexAttribL1d(__VA_ARGS__); checkglerr();
#define glVertexAttribL1dv(...)                            gl3wVertexAttribL1dv(__VA_ARGS__); checkglerr();
#define glVertexAttribL1ui64ARB(...)                       gl3wVertexAttribL1ui64ARB(__VA_ARGS__); checkglerr();
#define glVertexAttribL1ui64vARB(...)                      gl3wVertexAttribL1ui64vARB(__VA_ARGS__); checkglerr();
#define glVertexAttribL2d(...)                             gl3wVertexAttribL2d(__VA_ARGS__); checkglerr();
#define glVertexAttribL2dv(...)                            gl3wVertexAttribL2dv(__VA_ARGS__); checkglerr();
#define glVertexAttribL3d(...)                             gl3wVertexAttribL3d(__VA_ARGS__); checkglerr();
#define glVertexAttribL3dv(...)                            gl3wVertexAttribL3dv(__VA_ARGS__); checkglerr();
#define glVertexAttribL4d(...)                             gl3wVertexAttribL4d(__VA_ARGS__); checkglerr();
#define glVertexAttribL4dv(...)                            gl3wVertexAttribL4dv(__VA_ARGS__); checkglerr();
#define glVertexAttribLFormat(...)                         gl3wVertexAttribLFormat(__VA_ARGS__); checkglerr();
#define glVertexAttribLPointer(...)                        gl3wVertexAttribLPointer(__VA_ARGS__); checkglerr();
#define glVertexAttribP1ui(...)                            gl3wVertexAttribP1ui(__VA_ARGS__); checkglerr();
#define glVertexAttribP1uiv(...)                           gl3wVertexAttribP1uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribP2ui(...)                            gl3wVertexAttribP2ui(__VA_ARGS__); checkglerr();
#define glVertexAttribP2uiv(...)                           gl3wVertexAttribP2uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribP3ui(...)                            gl3wVertexAttribP3ui(__VA_ARGS__); checkglerr();
#define glVertexAttribP3uiv(...)                           gl3wVertexAttribP3uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribP4ui(...)                            gl3wVertexAttribP4ui(__VA_ARGS__); checkglerr();
#define glVertexAttribP4uiv(...)                           gl3wVertexAttribP4uiv(__VA_ARGS__); checkglerr();
#define glVertexAttribPointer(...)                         gl3wVertexAttribPointer(__VA_ARGS__); checkglerr();
#define glVertexBindingDivisor(...)                        gl3wVertexBindingDivisor(__VA_ARGS__); checkglerr();
#define glViewport(...)                                    gl3wViewport(__VA_ARGS__); checkglerr();
#define glViewportArrayv(...)                              gl3wViewportArrayv(__VA_ARGS__); checkglerr();
#define glViewportIndexedf(...)                            gl3wViewportIndexedf(__VA_ARGS__); checkglerr();
#define glViewportIndexedfv(...)                           gl3wViewportIndexedfv(__VA_ARGS__); checkglerr();
#define glWaitSync(...)                                    gl3wWaitSync(__VA_ARGS__); checkglerr();