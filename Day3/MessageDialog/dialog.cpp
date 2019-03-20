#include "dialog.h"

Dialog::Dialog() {

	set_title ( "Message Dialog Demo" );
	set_size_request ( 500, 300 );
	set_border_width( 25 );

	infoButton.set_label ("Information");
	questionButton.set_label ( "Question" );
	warningButton.set_label ( "Warning" );
	errorButton.set_label ( "Error" );

	buttonBox.set_layout ( Gtk::BUTTONBOX_END);

	buttonBox.add ( infoButton );
	buttonBox.add ( questionButton );
	buttonBox.add ( warningButton );
	buttonBox.add ( errorButton );

	add ( buttonBox );

	show_all_children();

	infoButton.signal_clicked().connect ( sigc::mem_fun ( *this, &Dialog::onInfoButtonClicked ) );
	questionButton.signal_clicked().connect ( sigc::mem_fun ( *this, &Dialog::onQuestionButtonClicked ) );
	errorButton.signal_clicked().connect ( sigc::mem_fun ( *this, &Dialog::onErrorButtonClicked ) );
	warningButton.signal_clicked().connect ( sigc::mem_fun ( *this, &Dialog::onWarningButtonClicked ) );
	
}

Dialog::~Dialog() { }

void Dialog::onInfoButtonClicked() {
	Gtk::MessageDialog infoDialog( "Information Dialog" );
	infoDialog.set_secondary_text( "Your detailed info goes here ..." );
	infoDialog.run();
}

void Dialog::onQuestionButtonClicked() {
	Gtk::MessageDialog questionDialog(*this, "Question Dialog", true, Gtk::MESSAGE_QUESTION, Gtk::BUTTONS_OK_CANCEL, true );
	questionDialog.set_secondary_text( "<i>Do you want to message goes here ?</i>" );
	int response = questionDialog.run();

	switch ( response ) {
		case Gtk::RESPONSE_OK:
			std::cout << "Ok button got clicked ..." << std::endl;
			break;
		case Gtk::RESPONSE_CANCEL:
			std::cout << "Cancel button got clicked ..." << std::endl;
			break;
	} 
}

void Dialog::onWarningButtonClicked() {
	Gtk::MessageDialog warningDialog( "Warning Dialog", false, Gtk::MESSAGE_WARNING, Gtk::BUTTONS_YES_NO );
	warningDialog.set_secondary_text( "Your warning message goes here." );
	int response = warningDialog.run();
	switch ( response ) {
		case Gtk::RESPONSE_YES:
			std::cout << "Yes button got clicked ..." << std::endl;
			break;
		case Gtk::RESPONSE_NO:
			std::cout << "No button got clicked ..." << std::endl;
			break;
	} 
}

void Dialog::onErrorButtonClicked() { 
	Gtk::MessageDialog errorDialog( "Error Dialog", false, Gtk::MESSAGE_ERROR , Gtk::BUTTONS_OK );
	errorDialog.set_secondary_text( "Fatal error occured." );
	int response = errorDialog.run();
}

