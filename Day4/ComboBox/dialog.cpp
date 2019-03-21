#include "dialog.h"

Dialog::Dialog() {

	set_title ( "Table Demo" );
	set_size_request ( 250, 100 );
	set_border_width ( 10 );

	genderLabel.set_label ( "Gender" );

	comboModel = Gtk::ListStore::create (modelRecord);
	genderComboBox.set_model ( comboModel );

	Gtk::TreeModel::Row firstValue = *(comboModel->append());
	firstValue[modelRecord.genderName] = "Male";

	Gtk::TreeModel::Row secondValue = *(comboModel->append());
	secondValue[modelRecord.genderName] = "Female";

	genderComboBox.pack_start ( modelRecord.genderName );

	genderComboBox.set_active ( 1 );

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
		std::cout << value[modelRecord.genderName]<< " is selected." << std::endl;
	}
}

Dialog::~Dialog() {

}
