dmenu - dynamic menu
====================
dmenu is an efficient dynamic menu for X.


### Integrated patches

* [fuzzymatch](https://tools.suckless.org/dmenu/patches/fuzzymatch/) : Add support for fuzzy-matching to dmenu, enabling matching using non-consecutive portions of items.


Requirements
------------
In order to build dmenu you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


Running dmenu
-------------
See the man page for details.
