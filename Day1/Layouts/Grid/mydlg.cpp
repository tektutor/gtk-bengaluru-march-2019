#include "mydlg.h"

MyDlg::MyDlg() {

	set_title ( "HBox and VBox Demo");
	set_border_width( 100);
	set_size_request(400,100);

	b1.set_label( "Button 1" );
	b2.set_label( "Button 2" );
	b3.set_label( "Button 3" );
	b4.set_label( "Button 4" );
	b5.set_label( "Button 5" );
	b6.set_label( "Button 6" );

	grid.set_row_homogeneous ( true );
	grid.set_column_homogeneous ( false );

	grid.attach ( b1, 0, 0, 2, 1 );
	//grid.attach ( b2, 1, 0, 1, 1 );
	//grid.attach ( b3, 2, 0, 1, 2 );
	grid.attach_next_to ( b3, b1, Gtk::POS_RIGHT, 1, 2 );

	grid.attach ( b4, 0, 1, 1, 1 );
	grid.attach ( b5, 1, 1, 1, 1 );
	//grid.attach ( b6, 2, 1, 1, 1 );
	//
	grid.set_row_spacing ( 5 );
	grid.set_column_spacing ( 10 );

	add ( grid );

	show_all_children();
}

MyDlg::~MyDlg() {

}
