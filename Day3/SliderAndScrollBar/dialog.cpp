#include "dialog.h"

Dialog::Dialog() 
{

	set_title ( "Range Widgets Demo" );
	set_size_request ( 500, 250 );
	set_border_width ( 5 );

	Glib::signal_timeout().connect( sigc::mem_fun ( *this, &Dialog::onTimeout ), 100 );

	progressBar.set_halign ( Gtk::ALIGN_CENTER);
	progressBar.set_valign ( Gtk::ALIGN_CENTER );
	progressBar.set_text ( "In Progress ..." );
	progressBar.set_show_text ( false );

	slider.set_range ( 0, 100 );
	slider.set_digits ( 1 );

	scrollBar.set_range ( 0, 100 );
	
	vBox.add( progressBar );
	vBox.add ( slider );
	vBox.add ( scrollBar );

	vBox.set_homogeneous ( false );

	add ( vBox );

	show_all_children ();

}

Dialog::~Dialog() {

}

bool Dialog::onTimeout() {
	
	double new_val = progressBar.get_fraction() + 0.01;
	
	if ( new_val > 1.0 )
		new_val = 0.0;

	progressBar.set_fraction ( new_val );
	slider.set_value ( new_val * 100 );
	scrollBar.set_value ( new_val * 100 );

	return true;

}
