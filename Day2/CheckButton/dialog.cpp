#include "dialog.h"

Dialog::Dialog() {
	set_border_width( 25 );
	set_title ("Buttons Signal Handling Demo" );

	button.set_label ("Click");
	add ( button );

 	button.signal_clicked().connect ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ) );	
 	button.signal_enter().connect ( sigc::mem_fun ( *this, &Dialog::onButtonEntered ) );	
 	button.signal_leave().connect ( sigc::mem_fun ( *this, &Dialog::onButtonLeave) );	
 	button.signal_pressed().connect ( sigc::mem_fun ( *this, &Dialog::onButtonPressed) );	
 	button.signal_released().connect ( sigc::mem_fun ( *this, &Dialog::onButtonReleased) );	
	
	show_all_children();
}

Dialog::~Dialog() {

}

void Dialog::onButtonClicked() {
	std::cout << "Button clicked ..." << std::endl;
	std::cout << "Active state is " << button.get_active() << std::endl;
}

void Dialog::onButtonEntered() {
	std::cout << "Button entered..." << std::endl;
}
void Dialog::onButtonLeave() {
	std::cout << "Button leave..." << std::endl;
}
void Dialog::onButtonPressed() {
	std::cout << "Button pressed ..." << std::endl;
}
void Dialog::onButtonReleased() {
	std::cout << "Button released..." << std::endl;
}
