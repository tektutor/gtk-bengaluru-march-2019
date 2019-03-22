#include <gtkmm/application.h>

#include "mainwindow.h"

int main ( int argc, char **argv ) {

	auto app = Gtk::Application::create ( argc, argv );

	MainWindow dlg;

	return app->run ( dlg );

}
