#include <gtkmm/application.h>
#include "mathdlg.h"

int main ( int argc, char **argv ) {

	auto appln = Gtk::Application::create ( argc, argv, "org.tektutor.app" );

	MathDlg mathDlg;

	return appln->run ( mathDlg ); 

}
