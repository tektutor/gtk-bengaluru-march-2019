#include <gtkmm/application.h>
#include "dialog.h"

int main ( int argc, char **argv ) {

	auto app = Gtk::Application::create ( argc, argv );

	Dialog dlg;

	return app->run ( dlg );

}
