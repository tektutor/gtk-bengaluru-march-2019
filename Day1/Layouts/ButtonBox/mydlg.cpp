#include "mydlg.h"

MyDlg::MyDlg() {
	b1.set_label( "Button 1" );
	b2.set_label( "Button 2" );
	b3.set_label( "Button 3" );

	buttonBox.set_layout ( Gtk::BUTTONBOX_END );

	buttonBox.add ( b1 );
	buttonBox.add ( b2 );
	buttonBox.add ( b3 );

	add ( buttonBox );

	//show_all_children();
	buttonBox.show_all();
}

MyDlg::~MyDlg() {

}
