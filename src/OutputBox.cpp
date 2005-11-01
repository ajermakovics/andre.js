// demo use of popen() and Fl::add_fd() - erco 10/04/04
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Multi_Browser.H>
#include <stdio.h>
/*
#ifdef _WIN32
#include <windows.h>
#define PING_CMD "ping -n 9999 localhost"    // 'slow command' under windows
#define popen  _popen
#define pclose _pclose
#else
#include <unistd.h>
#define PING_CMD "ping localhost"        // 'slow command' under unix
#endif

FILE *G_fp = NULL;

void HandleFD(int fd, void *data)
{
    Fl_Multi_Browser *brow = (Fl_Multi_Browser*)data;
    char s[1024];
    if ( fgets(s, 1023, G_fp) == NULL )
        { Fl::remove_fd(fileno(G_fp)); pclose(G_fp); return; }
    brow->add(s);
}

int main() {
    Fl_Window win(600,600);
    Fl_Multi_Browser brow(10,10,580,580);
    if ( ( G_fp = popen(PING_CMD, "r") ) == NULL )
        { perror("popen failed"); return(1); }
    Fl::add_fd(fileno(G_fp), HandleFD, (void*)&brow);
    win.resizable(brow);
    win.show();
    return(Fl::run());
}*/
