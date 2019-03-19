//Built-in header includes goes here
#include <gtkmm/main.h>

//Custom header inclusions goes here
#include "mydlg.h"

int main ( int argc, char **argv ) {

	Gtk::Main kit ( argc, argv );

	MyDlg dlg;

	Gtk::Main::run ( dlg );

	return 0; 	

}
