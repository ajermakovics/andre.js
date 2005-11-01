//
// main.cxx -- test the Fl_Native_File_Chooser widget
//
// Copyright 2004 by Greg Ercolano.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Choice.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Native_File_Chooser.H>

#ifdef WIN32
// WINDOWS //
# ifdef VISUAL_STUDIO
#  include <direct.h>
#  define getcwd _getcwd
# endif /*VISUAL_STUDIO*/
#define MAXPATHLEN MAX_PATH
#else
// UNIX //
#include <sys/param.h>
#include <unistd.h>
#endif

// GLOBALS
Fl_Native_File_Chooser *G_choo = NULL;
Fl_Input               *G_inpdirname = NULL;
Fl_Input               *G_inptitle = NULL;

void Butt_CB(Fl_Widget*w, void*data) {

    if ( G_inpdirname->value()[0] ) G_choo->preset_dirname(G_inpdirname->value());
    else G_choo->preset_dirname(NULL);

    if ( G_inptitle->value()[0] ) G_choo->title(G_inptitle->value());
    else G_choo->title("");

    switch ( G_choo->show() ) {
        case -1:	// ERROR
	    fprintf(stderr, "*** ERROR show():%s\n", G_choo->errmsg());
	    break;
        case 1:		// CANCEL
	    fprintf(stderr, "*** CANCEL\n");
	    break;

	default:
	    break;
    }

    int count = G_choo->total_filenames();
    if (count > 1) {
	for ( int t=0; t<count; t++ ) {
	    fprintf(stderr, "MULTI FILENAMES RESULT %d) '%s'\n", t, G_choo->filename(t));
	}
    }
    else if (count == 1) {
	fprintf(stderr, "SINGLE FILENAME RESULT: '%s'\n", G_choo->filename());
    }
}

void choice_cb(Fl_Widget*, void *data) {
    Fl_Choice *o = (Fl_Choice*)data;
    switch (o->value()) {
        case 0: G_choo->type(Fl_Native_File_Chooser::BROWSE_FILE);            break;
        case 1: G_choo->type(Fl_Native_File_Chooser::BROWSE_DIRECTORY);       break;
        case 2: G_choo->type(Fl_Native_File_Chooser::BROWSE_MULTI_FILE);      break;
        case 3: G_choo->type(Fl_Native_File_Chooser::BROWSE_MULTI_DIRECTORY); break;
        case 4: G_choo->type(Fl_Native_File_Chooser::BROWSE_SAVE_FILE);       break;
    }
}

int main() {
     char start_dir[MAXPATHLEN + 1];
     getcwd(start_dir, MAXPATHLEN);

     Fl_Window *win = new Fl_Window(300, 130);

     Fl_Choice *cho = new Fl_Choice(10,10,130,25);
     cho->add("Single File",      (const char*)NULL, choice_cb, (void*)cho);
     cho->add("Single Directory", (const char*)NULL, choice_cb, (void*)cho);
     cho->add("Multi File",       (const char*)NULL, choice_cb, (void*)cho);
     cho->add("Multi Directory",  (const char*)NULL, choice_cb, (void*)cho);
     cho->add("Save File",        (const char*)NULL, choice_cb, (void*)cho);
     cho->value(0);

     Fl_Button *but = new Fl_Button(150,10,80,25,"Browser");
     but->callback(Butt_CB);

     G_inptitle = new Fl_Input(80,50,200,25,"Title");
     G_inptitle->value("Title Of Window");

     G_inpdirname = new Fl_Input(80,80,200,25,"Preset Dir");
     G_inpdirname->value(start_dir);

     G_choo = new Fl_Native_File_Chooser();
     G_choo->type(Fl_Native_File_Chooser::BROWSE_FILE);

     win->show();
     return(Fl::run());
}
