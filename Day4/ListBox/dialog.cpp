#include "dialog.h"

Dialog::Dialog() {
	
	set_title ( "ListBox Demo" );
	set_border_width( 20 );
	set_size_request(200,100);

	val1.set_text( "Value 1" );	
	val2.set_text( "Value 2" );	
	val3.set_text( "Value 3" );	

	listBox.append ( val1 );
	listBox.append ( val2 );
	listBox.append ( val3 );

	hBox.add ( listBox );
	
	add ( hBox );

	listBox.signal_row_selected().connect (
		sigc::mem_fun( *this, &Dialog::onRowSelected )
	);

	show_all_children();
}

void Dialog::onRowSelected( Gtk::ListBoxRow *row ) {
//	std::cout << *row << std::endl;
}

Dialog::~Dialog() {

}

