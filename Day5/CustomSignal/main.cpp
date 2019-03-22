#include <gtkmm/application.h>
#include "dialog.h"
#include "receiver.h"

int main ( int argc, char **argv ) {

	auto app = Gtk::Application::create ( argc, argv );

	Dialog dlg;
	Receiver receiverOne, receiverTwo;
	
	dlg.signal_hello().connect( sigc::mem_fun ( receiverOne, &Receiver::onHelloSignal ) ); 
	dlg.signal_hello().connect( sigc::mem_fun ( receiverTwo, &Receiver::onHelloSignal ) ); 

	return app->run ( dlg );

}
