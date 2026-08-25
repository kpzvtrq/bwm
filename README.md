bwm - bsd window manager
========================
bwm is more than just a window manager; it is a minimal base environment for X.
It is a fork of dwm, heavily optimized for BSD systems,
designed to provide a "ready-to-go" workflow immediately after installation.


Features
--------

* Integrated Environment: Not just a WM, but a cohesive setup including a pre-configured terminal and status bar.

* Batteries Included: Comes with st (simple terminal) and slstatus already integrated and fine-tuned.

* Pre-patched: All essential patches are already applied, tested, and ready for work. No manual patching required.

* Lightweight: Extremely fast, small, and stays out of your way.


### Available patches for bwm

* [alwayscenter](https://dwm.suckless.org/patches/alwayscenter/) : All floating windows are centered, like the center patch, but without a rule.
* [pertag](https://dwm.suckless.org/patches/pertag/) : More general approach to taglayouts patch. This patch keeps layout, mwfact, barpos and nmaster per tag.
* [tiledmove](https://dwm.suckless.org/patches/tiledmove/) : Patch to make the function movemouse not force clients to float.
* [warp](https://dwm.suckless.org/patches/warp/) : This patch warps the mouse cursor to the center of the currently focused window or screen.
* [hide-vacant-tags](https://dwm.suckless.org/patches/hide_vacant_tags/) : This patch prevents dwm from drawing tags with no clients (i.e. vacant) on the bar. Moreover, clients assigned to all tags ("tag 0") do not count towards each individual tag.
* [removeborders](https://dwm.suckless.org/patches/removeborder/) : This patch removes the window frame if there is only one window on the tag.
* [vanitygaps](https://dwm.suckless.org/patches/vanitygaps/) : This patch adds smart margins around windows, as well as new layouts.
* [windowmap](https://dwm.suckless.org/patches/windowmap/) : The windowmap patch makes the windows get mapped or unmapped in Xorg. This results in certain behaviour being enabled, for example when you use a compositor like picom - your windows will fade in and out when you switch dwm tags.


Requirements
------------
In order to build bwm you need the Xlib header files.


Installation
------------
Edit Makefile to match your local setup (bwm is installed into
the /usr/local/bin namespace by default).

Note for GNU/Linux users: While a build script for Linux is provided,
seamless installation and full compatibility on GNU/Linux are not guaranteed.
This project is primarily focused on and tested for BSD systems.

BSD:

    make
    (root) make install

or

    (root) make all install


Running bwm
-----------
Add the following line to your .xinitrc to start bwm using startx:

    exec bwm

In order to connect bwm to a specific display, make sure that
the DISPLAY environment variable is set correctly, e.g.:

    DISPLAY=foo.bar:1 exec bwm

Status info
-----------
Since slstatus is included and pre-configured, you can simply trigger it in your .xinitrc:

    slstatus &
    exec bwm


Configuration
-------------
The configuration of bwm is done by creating a custom config.h
and (re)compiling the source code.

