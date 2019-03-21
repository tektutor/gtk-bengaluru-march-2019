#include "dialog.h"

Dialog::Dialog() {

	set_title ( "Table Demo" );
	set_size_request ( 250, 100 );
	set_border_width ( 10 );

	genderLabel.set_label ( "Combo Box" );

	comboModel = Gtk::ListStore::create (modelRecord);
	genderComboBox.set_model ( comboModel );

	Gtk::TreeModel::Row firstRow = *(comboModel->append());
	firstRow[modelRecord.firstName] = "Suresh";
	firstRow[modelRecord.age] = 30;

	Gtk::TreeModel::Row secondRow= *(comboModel->append());
	secondRow[modelRecord.firstName] = "Rahul";
	secondRow[modelRecord.age] = 29;

	genderComboBox.pack_start ( modelRecord.firstName );
	genderComboBox.pack_start ( modelRecord.age );

	genderComboBox.set_active ( 0 );

	hBox.add ( genderLabel );
	hBox.add ( genderComboBox );

	add ( hBox );
	hBox.set_border_width( 25 );

	genderComboBox.signal_changed().connect ( sigc::mem_fun( *this, &Dialog::onGenderSelected ) );

	show_all_children ( );	

}

void Dialog::onGenderSelected() {
	std::cout << "Choice changed" << std::endl;

	Gtk::TreeModel::iterator pos = genderComboBox.get_active();
	
	if ( pos ) {
		Gtk::TreeModel::Row value  = *pos;
		std::cout << value[modelRecord.firstName] << std::endl;
		std::cout << value[modelRecord.age ]  << std::endl;
	}
}

Dialog::~Dialog() {

}
