#include "mydlg.h"

MyDlg::MyDlg() {
	
	set_title ("Button Demo");
	set_size_request ( 200, 100 );
	set_border_width ( 10 );

	button1.set_label("Button 1");

	add ( button1 );

	//button1.set_border_width ( 10 );
	button1.show();

}

MyDlg::~MyDlg() { }
