#include "dialog.h"

Dialog::Dialog() {
	set_border_width( 25 );
	set_title ("Buttons Signal Handling Demo" );

	button1.set_label ("Option 1");
	button2.set_label ("Option 2");
	button3.set_label ("Option 3");
	
	vBox.add ( button1 );
	vBox.add ( button2 );
	vBox.add ( button3 );

	frame.add ( vBox );

	add ( frame );

 	button1.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ), 1 ));	
 	button2.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ),  2 )) ;	
 	button3.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ) , 3) ) ;	
	
	show_all_children();
}

Dialog::~Dialog() {

}

void Dialog::onButtonClicked( int caption ) {
	std::cout << caption << " clicked ..." << std::endl;
	bool state = false;
	switch ( caption ) {
		case 1:
			state = button1.get_state();
			break;
		case 2:
			state = button2.get_state();
			break;
		case 3:
			state = button3.get_state();
			break;
	}
	std:: cout << "Check button " << caption << " is " << state << std::endl;
}
