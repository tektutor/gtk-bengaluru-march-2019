#include "dialog.h"

Dialog::Dialog() {
	set_border_width( 25 );
	set_title ("Buttons Signal Handling Demo" );

	frame1.set_label ( "Group 1" );
	frame2.set_label ( "Group 2" );

	button1.set_label ("Option 1");
	button2.set_label ("Option 2");
	button3.set_label ("Option 3");
	
	vBox1.add ( button1 );
	vBox1.add ( button2 );
	vBox1.add ( button3 );

	frame1.add ( vBox1 );

	button4.set_label ("Option 4");
	button5.set_label ("Option 5");
	button6.set_label ("Option 6");
	
	vBox2.add ( button4 );
	vBox2.add ( button5 );
	vBox2.add ( button6 );

	frame2.add ( vBox2 );

	mainLayout.add ( frame1 );
	mainLayout.add ( frame2 );

	add ( mainLayout );

	mainLayout.set_spacing ( 10 );

 	button1.signal_clicked().connect ( sigc::bind<Glib::ustring> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked1 ), "test" ));	
 	button2.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ),  2 )) ;	
 	button3.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ) , 3) ) ;	
 	button4.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ), 4 ));	
 	button5.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ), 5 ));	
 	button6.signal_clicked().connect ( sigc::bind<int> ( sigc::mem_fun ( *this, &Dialog::onButtonClicked ), 6 ));	

	button2.join_group( button1 );
	button3.join_group( button1 );

	button5.join_group( button4 );
	button6.join_group( button4 );

	button3.set_active( true );
	button6.set_active( true );
	
	show_all_children();
}

Dialog::~Dialog() {

}

void Dialog::onButtonClicked1( Glib::ustring caption ) {

	std::cout << "usting overloade ..." << std::endl;

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
		case 4:
			state = button4.get_state();
			break;
		case 5:
			state = button5.get_state();
			break;
		case 6:
			state = button6.get_state();
			break;
	}
	std:: cout << "Check button " << caption << " is " << state << std::endl;
}
