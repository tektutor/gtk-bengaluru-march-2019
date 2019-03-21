#include "dialog.h"

Dialog::Dialog() : table(4, 5,true) {

	set_title ( "Table Demo" );
	set_size_request ( 300, 100 );
	set_border_width ( 10 );

	labelFirstName.set_text ("First Name" );
	labelLastName.set_text ( "Last Name" );
	labelDoorNo.set_text ( "Door No" );

	labelFirstName.set_halign( Gtk::ALIGN_END );
	labelLastName.set_halign ( Gtk::ALIGN_END );
	labelDoorNo.set_halign   ( Gtk::ALIGN_END );

	grid.attach ( labelFirstName, 0, 0, 1, 1 );
	grid.attach ( editFirstName,  1, 0, 1, 1 );

	grid.attach ( labelLastName,  0, 1, 1, 1 );
	grid.attach ( editLastName,   1, 1, 1, 1 );

	grid.attach ( labelDoorNo,    0, 2, 1, 1 );
	grid.attach ( editDoorNo,     1, 2, 1, 1 );

	populateData();

	Gtk::Button *editButton;
	Gtk::Button *deleteButton;

	std::list<Gtk::Entry*>::iterator firstNameIter = firstNameList.begin();
	std::list<Gtk::Entry*>::iterator lastNameIter = lastNameList.begin();
	std::list<Gtk::Entry*>::iterator doorNoIter = doorNoList.begin();

	for ( int row=0; row<4; ++row ) {
		editButton = new Gtk::Button();
		deleteButton = new Gtk::Button();

		editButtonList.push_back ( editButton );
		deleteButtonList.push_back ( deleteButton );

		editButton->signal_clicked().connect( 
			sigc::bind( sigc::mem_fun ( *this, &Dialog::onEditButtonClicked ), row ) );
		deleteButton->signal_clicked().connect( 
			sigc::bind( sigc::mem_fun ( *this, &Dialog::onDeleteButtonClicked ), row ) );
		
		editButton->set_label ( "Edit" );
		deleteButton->set_label ("Delete");
	
		table.attach ( **firstNameIter,0, 1, row, row+1 );
		table.attach ( **lastNameIter, 1, 2, row, row+1 );
		table.attach ( **doorNoIter,   2, 3, row, row+1 );
		table.attach ( *editButton,    3, 4, row, row+1 );
		table.attach ( *deleteButton,  4, 5, row, row+1 );

		UserDetails *ptrUserDetails = new UserDetails( *firstNameIter, *lastNameIter, *doorNoIter, editButton, deleteButton );
		userDetailsMap[ row ] = ptrUserDetails; 

		(*firstNameIter)->set_property( "editable", false );
		(*lastNameIter)->set_property ( "editable", false );
		(*doorNoIter)->set_property   ( "editable", false );

		++firstNameIter;
		++lastNameIter;
		++doorNoIter;
	}

	vBox.add ( grid );
	vBox.add ( table );

	grid.set_column_spacing ( 10 );

	scrollWindow.add ( vBox );

	add ( scrollWindow );

	vBox.set_spacing ( 20 );

	show_all_children ( );	

}

Dialog::~Dialog() {

}

void Dialog::populateData() {

	for ( int count=0; count<4; ++count ) {
		firstNameList.push_back ( new Gtk::Entry() ); 
		lastNameList.push_back ( new Gtk::Entry() );
		doorNoList.push_back ( new Gtk::Entry() );
	}

	std::list<Gtk::Entry*>::iterator firstNameIter = firstNameList.begin();
	std::list<Gtk::Entry*>::iterator lastNameIter = lastNameList.begin();
	std::list<Gtk::Entry*>::iterator doorNoIter = doorNoList.begin();

	(*firstNameIter)->set_text("AAAA");
	(*lastNameIter)->set_text("BBBBB");
	(*doorNoIter)->set_text("1111");

	++firstNameIter;
	++lastNameIter;
	++doorNoIter;

	(*firstNameIter)->set_text("XXXXXX");
	(*lastNameIter)->set_text("YYYYYY");
	(*doorNoIter)->set_text("22222");

	++firstNameIter;
	++lastNameIter;
	++doorNoIter;

	(*firstNameIter)->set_text("YYYYYYY");
	(*lastNameIter)->set_text("YYYYYYYY");
	(*doorNoIter)->set_text("3333");

	++firstNameIter;
	++lastNameIter;
	++doorNoIter;

	(*firstNameIter)->set_text("ZZZZZ");
	(*lastNameIter)->set_text("ZZZZZ");
	(*doorNoIter)->set_text("4444");
	
}

void Dialog::onEditButtonClicked(int row) {
	std::cout << "Edit button @ " << row << " got clicked .." << std::endl;
	
	userDetailsMap[row]->ptrFirstName->set_text("Edited FirstName");
	userDetailsMap[row]->ptrLastName->set_text("Edited LastName");
	userDetailsMap[row]->ptrDoorNo->set_text( "Edited DoorNo" );
}

void Dialog::onDeleteButtonClicked(int row) {
	std::cout << "Delete button clicked .." << std::endl;
	
	table.remove ( * userDetailsMap[row]->ptrFirstName );
	table.remove ( * userDetailsMap[row]->ptrLastName );
	table.remove ( * userDetailsMap[row]->ptrDoorNo );

	table.remove ( * userDetailsMap[row]->ptrEditButton );
	table.remove ( * userDetailsMap[row]->ptrDeleteButton );

	table.set_resize_mode ( Gtk::RESIZE_IMMEDIATE );

}
