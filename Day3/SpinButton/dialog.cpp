#include "dialog.h"

Dialog::Dialog(): 
	dayAdjustment (Gtk::Adjustment::create(1, 1, 1000, 1, 5, 0 )),
	monthAdjustment (Gtk::Adjustment::create( 1, 1, 12, 1, 1, 0)),
	yearAdjustment (Gtk::Adjustment::create(2019, 2019, 2100, 1, 100, 0 ))
 {

	set_title ( "Progress Bar Demo" );
	set_size_request ( 100, 50 );
	set_border_width( 25 );

	daySpin.configure( dayAdjustment, 0,0 );
	monthSpin.configure ( monthAdjustment, 0, 0 );
	yearSpin.configure ( yearAdjustment, 0, 0 );

	hBox.add ( daySpin );
	hBox.add ( monthSpin );
	hBox.add ( yearSpin );

	add ( hBox );
	
	show_all_children();
}

Dialog::~Dialog() { }
