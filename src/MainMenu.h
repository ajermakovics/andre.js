#include <FL/Fl_Menu_Bar.H>

class MainMenu: public Fl_Menu_Bar {
	public:
		MainMenu(int x, int y, int w, int h);
		void InitItems();
};

void menu_cb(void *data);
