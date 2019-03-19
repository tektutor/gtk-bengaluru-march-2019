#include "mydlg.h"

MyDlg::MyDlg() {
	b1.set_label( "Button 1" );
	b2.set_label( "Button 2" );
	b3.set_label( "Button 3" );
	b4.set_label( "Button 4" );
	b5.set_label( "Button 5" );
	b6.set_label( "Button 6" );

	flowBox.add ( b1 );
	flowBox.add ( b2 );
	flowBox.add ( b3 );
	flowBox.add ( b4 );
	flowBox.add ( b5 );
	flowBox.add ( b6 );

	add ( flowBox );

	//show_all_children();
	flowBox.show_all();
}

MyDlg::~MyDlg() {

}
