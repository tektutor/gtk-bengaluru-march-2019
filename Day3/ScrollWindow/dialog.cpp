#include "dialog.h"

Dialog::Dialog() {

	set_title ( "ScrollWindow Demo" );
	set_size_request ( 100, 100 );
	set_border_width ( 5 );

	textBuffer = Gtk::TextBuffer::create();

	textView.set_buffer ( textBuffer );

	hBox.add ( textView );
	scrollWindow.add ( hBox ); 

	add ( scrollWindow );

	show_all_children();
}

Dialog::~Dialog() { }
