#include <gtkmm/main.h>

#include "mydlg.h"

int main ( int argc, char **argv ) {

	Gtk::Main kit ( argc, argv );

	MyDlg dlg;
	Gtk::Main::run ( dlg );

	return 0;
}
