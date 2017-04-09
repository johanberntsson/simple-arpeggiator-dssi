Simple Arpeggiator (DSSI version)

Introduction
============

Simple Arpeggiator is a arpeggiator plugin for the DSSI Soft Synth
Interface.  DSSI is a plugin API for software instruments (soft
synths) with user interfaces, permitting them to be hosted
in-process by audio applications.  More information on DSSI can be
found at:

  http://dssi.sourceforge.net/


Simple Arpeggiator is written by Johan Berntsson, and is released
under the GNU General Public License, version 2 or later.  See the
enclosed file COPYING for details.


Requirements
============

For Ubuntu 17.04 these packages should be installed:
sudo apt-get install dssi-dev ladspa-sdk liblo-devl sudo apt-get install libgtk2.0-dev libgtk2.0

For other systems you need to have the following installed:

    - DSSI version 0.9 or greater, available from the
        dssi.sourceforge.net address above.

    - liblo version 0.12 or later (0.23 or later recommended), a
        library implementing the Open Sound Control (OSC) protocol,
        available at:

        http://liblo.sourceforge.net/

    - the LADSPA v1.x SDK.

    - pkgconfig with PKG_CONFIG_PATH set appropriately to pick up
        DSSI, and liblo

    - GTK+ version 2.x or later.  (If GTK+ is not found, the plugin
        will be built without the GUI.)

    - a working DSSI host.  Xsynth-DSSI has been tested with
        jack-dssi-host, available in the DSSI distribution, and with
        ghostess, available at:

        http://smbolton.com/linux.html

    - automake 1.7 and autoconf 2.59 or better if you wish to
        recreate the build files.

Operation
=========
Start your DSSI host and create an instance of the simple arpeggiator
plugin.  See the 'Example' section below for how to do this with
jack-dssi-host.


Example
=======
1. Start JACK.

2. Run jack-dssi-host, starting a simple arpeggiator instance

3. Start a soft synth of your choise and connect it to midi out from
the simple arpeggiator

4. Connect a keyboard to midi in on the simple arpeggiator

5. Push a key. An arpeggiated sound should be heard from the soft synth

