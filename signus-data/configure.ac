dnl Process this file with autoconf to produce a configure script.

AC_REVISION($Revision$)
AC_PREREQ(2.52)

AC_INIT([signus-data], [1.96], [vslavik@fastmail.fm])

AC_CONFIG_SRCDIR([utils/makedat.cpp])
AC_CONFIG_AUX_DIR([admin])

AC_CANONICAL_SYSTEM

AM_INIT_AUTOMAKE

dnl Checks for programs.
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_RANLIB
AC_PROG_CC
AC_PROG_CXX
AC_PROG_CXXCPP

PKG_CHECK_MODULES([libpng], [libpng])

MAKEDAT='MAKEDAT_PALETTE="$(top_srcdir)/data/nolang/graphics/palette.col" $(top_builddir)/utils/makedat'
AC_SUBST(MAKEDAT)
MK_RGB2PAL='$(top_builddir)/utils/mk_rgb2pal'
AC_SUBST(MK_RGB2PAL)
FNTMNG='$(top_builddir)/utils/fntmng'
AC_SUBST(FNTMNG)

AC_OUTPUT([
         Makefile
         utils/Makefile
         data/Makefile
         data/nolang/Makefile
         data/nolang/anims/Makefile
         data/nolang/missions/Makefile
         data/nolang/music/Makefile
         data/nolang/sfx/Makefile
         data/nolang/graphics/Makefile
         data/nolang/fonts/Makefile
         data/en/Makefile
         data/en/anims/Makefile
         data/en/speech/Makefile
         data/en/graphics/Makefile
         data/en/texts/Makefile
         data/cs/Makefile
         data/cs/anims/Makefile
         data/cs/speech/Makefile
         data/cs/graphics/Makefile
         data/cs/texts/Makefile
         data/version-data
         ])
