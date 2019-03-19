#include <gtkmm.h>

int main ( int argc, char ** argv ) {

	Gtk::Main kit( argc, argv );

	Gtk::Window window;
	window.set_size_request( 300, 300 );
	window.set_title ("Hello Gtk!");

	Gtk::Main::run ( window );

	return 0;
}
