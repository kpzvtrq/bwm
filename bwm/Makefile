# bwm - bsd window manager
# See LICENSE file for copyright and license details.

PROG= bwm
BINDIR?= /home/kpz/.local/bin
MAN=

.PATH: src
SRCS=	bwm.c \
		brw.c \
		util.c

CPPFLAGS+=	-I/usr/X11R6/include -I/usr/X11R6/include/freetype2
CPPFLAGS+=	-I/usr/local/include -I/usr/local/include/freetype2
LDADD+=		-L/usr/X11R6/lib
LDADD+=		-L/usr/local/lib
LDADD+=		-lX11 -lXft -lXinerama -lfontconfig
CFLAGS+=	-std=c17 -pedantic -Wall -O2

.include <bsd.prog.mk>

