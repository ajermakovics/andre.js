#include "MainWindow.h"

/*=============================================================================
	MainMenu
=============================================================================*/
MainMenu::MainMenu(int x, int y, int w, int h) 
:Fl_Menu_Bar(x, y, w, h) 
{	
	this->InitItems();
}
/*=============================================================================
	InitItems
=============================================================================*/
void MainMenu::InitItems() {

	Fl_Menu_Item menuitems[] = {
  { "File",              0, 0, 0, FL_SUBMENU },
    { "&New",        FL_CTRL + 'n', (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
    { "&Open",        FL_CTRL + 'o', (Fl_Callback *)menu_cb, 0 },
    { "Open &Include file",  FL_CTRL + 'i', (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
    { "&Save File",       FL_CTRL + 's', (Fl_Callback *)menu_cb, 0 },
    { "Save File &As...", FL_CTRL + FL_SHIFT + 's', (Fl_Callback *)menu_cb, 0 },
    { "Save File &List",  FL_CTRL + 'l', (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
    { "P&rev File",    FL_ALT + FL_Up, (Fl_Callback *)menu_cb, 0,  },
    { "N&ext File",    FL_ALT + FL_Down, (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
    { "&Close File", 			FL_CTRL + 'w', (Fl_Callback *)menu_cb, 0 },
    { "E&xit", 						FL_ALT + (FL_F + 4), (Fl_Callback *)menu_cb, 0 },
    { 0 },

  { "Edit", 0, 0, 0, FL_SUBMENU },
    { "&Undo",       FL_CTRL + 'z', (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
    { "Cu&t",        FL_CTRL + 'x', (Fl_Callback *)menu_cb, 0 },
    { "&Copy",       FL_CTRL + 'c', (Fl_Callback *)menu_cb, 0 },
		{ "&Paste",      FL_CTRL + 'v', (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
		{ "Insert &Echo", FL_CTRL + 'e', (Fl_Callback *)menu_cb, 0 },
    { 0 },

  { "Search", 0, 0, 0, FL_SUBMENU },
    { "&Find...",       FL_CTRL + 'f', (Fl_Callback *)menu_cb, 0 },
    { "F&ind Again",    (FL_F + 3), (Fl_Callback *)menu_cb, 0 },
    { "&Replace...",    FL_CTRL + 'r', (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
    { "&Go to line...", FL_CTRL + 'g', (Fl_Callback *)menu_cb, 0, FL_MENU_DIVIDER },
    { "&Prev Func",    FL_CTRL + FL_Up, (Fl_Callback *)menu_cb, 0 },
    { "&Next Func",    FL_CTRL + FL_Down, (Fl_Callback *)menu_cb, 0 },
    { 0 },
    
  { "Tools", 0, 0, 0, FL_SUBMENU },  
  	{ "&Color selector...",       FL_CTRL + 'k', (Fl_Callback *)menu_cb, 0 },
  	{ "Go to &definition...",     FL_CTRL + 'd', (Fl_Callback *)menu_cb, 0 },
  	{ 0 },
  	
  { 0 }
	};

	this->copy(menuitems);	
	
	//for ( int t=0; t < menubar->size(); t++ )
  // Fl_Menu_Item *m = (Fl_Menu_Item*)&(menubar->menu()[t]);
 
}

/*=============================================================================
	menu_cb
=============================================================================*/
void menu_cb(void* data)
{  
	Fl_Menu_Bar* menu = (Fl_Menu_Bar*)(data);

	if( ! menu || ! menu->mvalue() ) return;
	const Fl_Menu_Item* menuitem = menu->mvalue();
	
	MainWindow* Window = (MainWindow*)(menu->parent());
	Window->Shortcut( menuitem->shortcut() );
	//printf("menu_cb: %s\n", menuitem->label());
}
