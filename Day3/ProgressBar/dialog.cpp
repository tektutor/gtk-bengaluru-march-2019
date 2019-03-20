#include "dialog.h"

Dialog::Dialog() {

	set_title ( "Progress Bar Demo" );
	set_size_request ( 500, 300 );
	set_border_width( 25 );

	hBox.add ( progressBar );

	add ( hBox );
	
	progressBar.set_fraction ( 0.0 );
	progressBar.set_halign ( Gtk::ALIGN_CENTER );
	progressBar.set_valign ( Gtk::ALIGN_CENTER );

	show_all_children();

	Glib::signal_timeout().connect ( sigc::mem_fun ( *this, &Dialog::onTimerEmitted ), 1000 );
}

Dialog::~Dialog() { }

bool Dialog::onTimerEmitted( ) {
	std::cout << "Timer signal emitted ..." << std::endl;

#if 0
	//Activity mode
	double value = progressBar.get_pulse_step();

	value = value + 0.1;

	progressBar.set_pulse_step( value );
	progressBar.pulse();
#else
	//Percentage mode
	double value = progressBar.get_fraction();
	std::cout << "Value is " << value << std::endl;
	value = value + 0.1;

	progressBar.set_fraction( value );

	if ( value >= 1.0 )
		return false;
#endif
	
	return true;
}
