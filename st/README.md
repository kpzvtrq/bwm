# st - simple terminal

st is a simple terminal emulator for X which sucks less.

## Notes about this fork

This is a pre-configured fork of st. Unlike the vanilla version, all patches
listed below are already integrated into the source code. You do not need to
apply them manually; the terminal is ready to be built and used immediately.

  - Original Repository: [https://git.suckless.org/st/](https://git.suckless.org/st/)
  - Original Webpage: [https://st.suckless.org/](https://st.suckless.org/)

  
### Integrated patches

* [Clipboard](https://st.suckless.org/patches/clipboard/) : This trivial patch sets CLIPBOARD on selection.
* [font2](https://st.suckless.org/patches/font2/) : This patch allows to add spare font besides default.
* [Wide glyph](https://st.suckless.org/patches/glyph_wide_support/) : This patch allows to display the full glyph instead of it being cut off. See also [here](https://github.com/LukeSmithxyz/st/pull/349)
* [anysize](https://st.suckless.org/patches/anysize/) : This patch allows the terminal window to adjust to the monitor size.
* [scrollback/mouse/mouse-altscreen](https://st.suckless.org/patches/scrollback/) : These patches add history scrolling.
* [colorscheme](https://st.suckless.org/patches/colorschemes/) : This patch adds multiple color schemes and lets you change them without having to restart st.

#### Colorscheme patch
The colorscheme patch is a custom patch, it is not the ones from [colorscheme](https://st.suckless.org/patches/colorschemes/)
It is `solarized.dark` exported from https://terminal.sexy with a different bg and fg color.
Also the `defaultfg`, `defaultbg` and `defaultcs` are not `static`s, otherwise it won't compile.


## Requirements

In order to build st you need the Xlib header files.

## Installation

Edit config.mk to match your local setup (st is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install st (if
necessary as root):

```bash
make clean install
```

## Running st

Start `st` from a launcher like dmenu or rofi.

If you did not install st with make clean install, you must compile
the st terminfo entry with the following command:

```bash
tic -sx st.info
```

See the man page for additional details.

### Keyboard Shortcuts
Action      | Key Combination
---         | ---
Copy        | `ctrl` + `shift` + `c`
Paste       | `ctrl` + `shift` + `v`
Zoom In     | `ctrl` + `shift` + `PageUp`
Zoom Out    | `ctrl` + `shift` + `PageDown`
Reset Zoom  | `ctrl` + `shift` + `Home`

## Credits

* Forked from [suckless simple terminal](https://st.suckless.org/)
* Based on Aurélien APTEL aurelien.aptel@gmail.com bt source code.
