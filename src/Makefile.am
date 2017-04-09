## Process this file with automake to produce Makefile.in

if BUILD_GUI
ui_PROGRAMS = SimpleArpeggiator-DSSI_gtk
else
ui_PROGRAMS =
endif

uidir = $(libdir)/dssi/simplearpeggiator-dssi

plugindir = $(libdir)/dssi

plugin_LTLIBRARIES = simplearpeggiator-dssi.la

simple_arpeggiator_dssi_gtk_SOURCES = \
	SimpleArpeggiator-DSSI_gtk.c

simple_arpeggiator_dssi_gtk_CFLAGS = @GTK_CFLAGS@ $(AM_CFLAGS)

if DARWIN
simple_arpeggiator_dssi_gtk_LDADD = -lm -lmx @GTK_LIBS@ $(AM_LDFLAGS)
else
simple_arpeggiator_dssi_gtk_LDADD = -lm @GTK_LIBS@ $(AM_LDFLAGS)
endif

simple_arpeggiator_dssi_la_SOURCES = \
	simplearpeggiator-dssi.c \
	simplearpeggiator-dssi.h

simple_arpeggiator_dssi_la_CFLAGS = 

simple_arpeggiator_dssi_la_LDFLAGS = -module -avoid-version

simple_arpeggiator_dssi_la_LIBADD = -lm 

# create symlinks for the plugin to jack-dssi-host
install-exec-hook:
	if test -x $(DESTDIR)$(bindir)/jack-dssi-host$(EXEEXT) ; then \
	  cd $(DESTDIR)$(bindir) ; \
	  if ! test -x ./simplearpeggiator-dssi$(EXEEXT) ; then \
	    $(LN_S) jack-dssi-host$(EXEEXT) simplearpeggiator-dssi$(EXEEXT) ; \
	  fi ; \
	fi

