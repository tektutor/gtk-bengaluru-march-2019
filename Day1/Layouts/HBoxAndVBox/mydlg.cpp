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
	grid.set_column_homogeneous ( true );

	grid.attach ( b1, 0, 0, 1, 1 );
	grid.attach ( b2, 1, 0, 1, 1 );
	grid.attach ( b3, 2, 0, 1, 1 );

	grid.attach ( b2, 0, 1, 1, 1 );
	grid.attach ( b3, 1, 1, 1, 1 );
	grid.attach ( b3, 2, 1, 1, 1 );

	add ( grid );

	show_all_children();
}

MyDlg::~MyDlg() {

}
