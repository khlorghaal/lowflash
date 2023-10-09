lowflash is a compositor shader for reducing risk of photosensitivity and photoepilepsy.
its a simple temporal lowpass filter roughly inspired by TXAA.

this is not a reliable nor scientifically studied solution to photoepilepsy prevention.
it must be used in addition to things like: simple avoidance, browser plugins, websites offering accomodations - ie i implore youtube should offer a checkbox for video authors to indicate potential photosensitivity andor loud audio.
i am personally not epileptic at all. my motivation for this project is much of my artwork is severely photoepilepsy averse.


UNDER CONSTRUCTION. NOT WORKING.

currently only works with gnome mutter.
support for windows, kde, and compton is todo

#installation
arch: ``yay -S lowflash``
nix: ``pending``
put the binary anywhere and execute it after the window manager is fully loaded
the elf does not require any other files not already present from the window manager

#build
``make``
