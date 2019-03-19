#include <gtkmm/application.h>

#include "dialog.h"

int main ( int argc, char **argv ) {

	auto app = Gtk::Application::create ( argc, argv, "org.tektutor.SignalsDemo" );

	Dialog dlg;

	return app->run ( dlg );

}
