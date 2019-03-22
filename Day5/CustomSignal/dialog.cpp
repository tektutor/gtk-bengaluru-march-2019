#include "dialog.h"

Dialog::Dialog() {

	set_title ( "ListBox Demo" );
	set_size_request ( 200, 100 );
	set_border_width ( 20 );

	emitCustomSignal.set_label ( "Emit Signal" );

	hBox.add ( emitCustomSignal );

	add ( hBox );

	emitCustomSignal.signal_clicked().connect ( sigc::mem_fun ( *this, &Dialog::onEmitSignalClicked ) );

	show_all_children();
}

Dialog::~Dialog() { }

Dialog::type_signal_hello Dialog::signal_hello() {
	return m_signal_hello;
}

void Dialog::onEmitSignalClicked() {
	m_signal_hello.emit ( "Hello Signal ******" );
}
