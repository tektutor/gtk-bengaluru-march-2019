#include "dialog.h"

Dialog::Dialog() : table(4, 6,true) {

	set_title ( "Table Demo" );
	set_size_request ( 500, 200 );
	set_border_width ( 10 );

	labelFirstName.set_text ("First Name" );
	labelLastName.set_text ( "Last Name" );
	labelDoorNo.set_text ( "Door No" );
	labelStreet.set_text ("Street");
	labelCity.set_text ( "City" );
	labelState.set_text ( "State" );

	labelFirstName.set_halign( Gtk::ALIGN_END );
	labelLastName.set_halign ( Gtk::ALIGN_END );
	labelDoorNo.set_halign   ( Gtk::ALIGN_END );
	labelStreet.set_halign   ( Gtk::ALIGN_END );
	labelCity.set_halign     ( Gtk::ALIGN_END );
	labelState.set_halign    ( Gtk::ALIGN_END );

	grid.attach ( labelFirstName, 0, 0, 1, 1 );
	grid.attach ( editFirstName,  1, 0, 1, 1 );

	grid.attach ( labelLastName,  0, 1, 1, 1 );
	grid.attach ( editLastName,   1, 1, 1, 1 );

	grid.attach ( labelDoorNo,    0, 2, 1, 1 );
	grid.attach ( editDoorNo,     1, 2, 1, 1 );

	grid.attach ( labelStreet,    0, 3, 1, 1 );
	grid.attach ( editStreet,     1, 3 , 1, 1 );

	grid.attach ( labelCity,      0, 4, 1, 1 );
	grid.attach ( editCity,       1, 4, 1, 1 );

	grid.attach ( labelState,     0, 5, 1, 1 );
	grid.attach ( editState,      1, 5, 1, 1 );
	
	populateData();

	for ( int row=0; row<4; ++row ) {
		table.attach ( firstName[row],0, 1, row, row+1 );
		table.attach ( lastName[row], 1, 2, row, row+1 );
		table.attach ( doorNo[row],   2, 3, row, row+1 );
		table.attach ( street[row],   3, 4, row, row+1 );
		table.attach ( city[row],     4, 5, row, row+1 );
		table.attach ( state[row],    5, 6, row, row+1 );

		firstName[row].set_property( "editable", false );
		lastName[row].set_property ( "editable", false );
		doorNo[row].set_property   ( "editable", false );
		street[row].set_property   ( "editable", false );
		city[row].set_property     ( "editable", false );
		state[row].set_property    ( "editable", false );
	}

	vBox.add ( grid );
	vBox.add ( table );

	grid.set_column_spacing ( 10 );

	add ( vBox );

	vBox.set_spacing ( 20 );

	show_all_children ( );	

}

Dialog::~Dialog() {

}

void Dialog::populateData() {
	firstName[0].set_text("Jeganathan");
	lastName [0].set_text("Swaminathan");
	doorNo   [0].set_text("1111");
	street   [0].set_text("Street 1");
	city     [0].set_text("City 1");
	state    [0].set_text("State 1");
	
	firstName[1].set_text("Hariharan");
	lastName [1].set_text("Parasuraman");
	doorNo   [1].set_text("2222");
	street   [1].set_text("Street 2");
	city     [1].set_text("City 2");
	state    [1].set_text("State 2");

	firstName[2].set_text("Rishi");
	lastName [2].set_text("Sahay");
	doorNo   [2].set_text("3333");
	street   [2].set_text("Street 3");
	city     [2].set_text("City 3");
	state    [2].set_text("State 3");

	firstName[3].set_text("Arun");
	lastName [3].set_text("KR");
	doorNo   [3].set_text("4444");
	street   [3].set_text("Street 4");
	city     [3].set_text("City 4");
	state    [3].set_text("State 4");
}
