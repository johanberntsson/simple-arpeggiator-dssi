/* SimpleArpeggiator DSSI software synthesizer GUI
 *
 * Copyright (C) 2017 Johan Berntsson
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307, USA.
 */

#ifndef _SIMPLEARPEGGIATOR_DSSI_GTK_H
#define _SIMPLEARPEGGIATOR_DSSI_GTK_H

#include <stdio.h>

/* ==== debugging ==== */

/* DSSI interface debugging -- choose one: */
#define DEBUG_DSSI(fmt...)
// #define DEBUG_DSSI(fmt...) { fprintf(stderr, fmt); }


/* ==== SimpleArpeggiator-DSSI_gtk prototypes ==== */

/*
int  lo_server_get_socket_fd(lo_server *server);
int  lo_server_set_nonblocking(lo_server *server);
int  osc_debug_handler(const char *path, const char *types, lo_arg **argv,
                       int argc, lo_message msg, void *user_data);
int  osc_action_handler(const char *path, const char *types, lo_arg **argv,
                        int argc, lo_message msg, void *user_data);
int  osc_configure_handler(const char *path, const char *types, lo_arg **argv,
                           int argc, lo_message msg, void *user_data);
int  osc_control_handler(const char *path, const char *types, lo_arg **argv,
                         int argc, lo_message msg, void *user_data);
int  osc_program_handler(const char *path, const char *types, lo_arg **argv,
                         int argc, lo_message msg, void *user_data);
void osc_data_on_socket_callback(gpointer data, gint source,
                                 GdkInputCondition condition);
gint on_delete_event_wrapper(GtkWidget *widget, GdkEvent *event,
                             gpointer data);
void on_select_soundfont_button_press(GtkWidget *widget, gpointer data);
int  load_soundfont(char *filename);
void on_file_selection_ok(GtkWidget *widget, gpointer data);
void on_file_selection_cancel(GtkWidget *widget, gpointer data);
void on_preset_selection(GtkWidget *clist, gint row, gint column,
                         GdkEventButton *event, gpointer data);
void on_test_note_slider_change(GtkWidget *widget, gpointer data);
void on_test_note_button_press(GtkWidget *widget, gpointer data);
void on_notice_dismiss(GtkWidget *widget, gpointer data);
void update_from_program_select(int bank, int program);
void rebuild_preset_clist(SFData *sfdata);
GtkWidget *create_main_window(const char *tag);
GtkWidget *create_file_selection(const char *tag);
GtkWidget *create_notice_window(const char *tag);
void create_windows(const char *instance_tag);
*/

#endif /* _SIMPLEARPEGGIATOR_DSSI_GTK_H */

