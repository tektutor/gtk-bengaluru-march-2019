#include "dialog.h"

Dialog::Dialog(): scrollBar ( Gtk::Adjustment::create( 0, 1, 10, 1, 5, 0) ) {

	set_size_request( 50, 50 );
	set_title ( "SCrollBar Demo" );

	vBox.set_size_request( 50, 50 );

	
	vBox.add ( textInput );
	vBox.add ( scrollBar );
	vBox.set_homogeneous( true );

	add ( vBox );
	
	show_all_children();
}

Dialog::~Dialog() { }
