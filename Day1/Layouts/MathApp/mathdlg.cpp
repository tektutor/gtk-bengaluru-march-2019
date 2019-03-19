#include "mathdlg.h"

MathDlg::MathDlg() {
	set_border_width( 10 );
	set_size_request( 500, 200 );
	set_title ( "Math Application" );

	//Disable maximize option and also disables resize grip options
	set_resizable ( false );
	
	frame.set_label ( "Math Application" );
  	frame.set_shadow_type(Gtk::SHADOW_IN);
	//frame.set_border_width(25);

	addBttn.set_label      ( "Add"      );
	subtractBttn.set_label ( "Subtract" );
	multiplyBttn.set_label ( "Multiply" );
	divideBttn.set_label   ( "Divide"   );
#if 0
	addBttn.signal_clicked().connect ( sigc::bind<Glib::ustring>( 
		sigc::mem_fun( *this, &MathDlg::onAddClicked ), "+"     ) 
	);
	subtractBttn.signal_clicked().connect ( sigc::bind<Glib::ustring>( 
		sigc::mem_fun( *this, &MathDlg::onAddClicked ), "-"     ) 
	);
	multiplyBttn.signal_clicked().connect ( sigc::bind<Glib::ustring>( 
		sigc::mem_fun( *this, &MathDlg::onAddClicked ), "*"     ) 
	);
	divideBttn.signal_clicked().connect ( sigc::bind<Glib::ustring>( 
		sigc::mem_fun( *this, &MathDlg::onAddClicked ), "/"     ) 
	);
#else

	addBttn.signal_clicked().connect ( sigc::mem_fun ( *this, &MathDlg::onAddClicked ) ); 
	subtractBttn.signal_clicked().connect ( sigc::mem_fun( *this, &MathDlg::onSubtractClicked ) );
	multiplyBttn.signal_clicked().connect ( sigc::mem_fun( *this, &MathDlg::onMultiplyClicked ) );
	divideBttn.signal_clicked().connect   ( sigc::mem_fun( *this, &MathDlg::onDivideClicked   ) );
#endif
	
	hBox.add ( addBttn      );
	hBox.add ( subtractBttn );
	hBox.add ( multiplyBttn );
	hBox.add ( divideBttn   );

	grid.set_column_homogeneous ( true );
	grid.set_row_homogeneous    ( true );

	firstInputCaption.set_label  ( "First Input"  );
	secondInputCaption.set_label ( "Second Input" );
	resultCaption.set_label      ( "Result"       );

	firstInputCaption.set_halign( Gtk::ALIGN_END ); 
	secondInputCaption.set_halign( Gtk::ALIGN_END ); 
	resultCaption.set_halign( Gtk::ALIGN_END ); 

	grid.attach ( firstInputCaption,  0, 0, 1, 1 );
	grid.attach ( firstInputText,     1, 0, 1, 1 );

	grid.attach ( secondInputCaption, 0, 1, 1, 1 );
	grid.attach ( secondInputText,    1, 1, 1, 1 );

	grid.attach ( resultCaption,      0, 2, 1, 1 );
	grid.attach ( resultInputText,    1, 2, 1, 1 );

	grid.set_column_spacing ( 10 );

	hBox.set_layout ( Gtk::BUTTONBOX_END );

	frame.add ( vBox );
	vBox.add ( grid );
	vBox.add ( hBox );

	vBox.set_border_width( 10 );

	add ( frame );
	show_all_children();
}

MathDlg::~MathDlg() {

}

std::string MathDlg::double_to_string( const double value ) {

    std::ostringstream stream;
    // Go for maximum precision and take into account that converting could fail.
    if (!(stream << std::setprecision(std::numeric_limits<double>::digits10) << value))
    {
       // Possibly throw an exception instead.
       return std::string();
    }

    return stream.str();

}

void MathDlg::onAddClicked() {
	Glib::ustring firstText = firstInputText.get_text();
	std::istringstream out1( firstText );
	out1 >> firstNumber;

	Glib::ustring secondText = secondInputText.get_text();
	std::istringstream out2( secondText );
	out2 >> secondNumber;

	result = firstNumber + secondNumber;

	resultInputText.set_text ( double_to_string (result) );
}

void MathDlg::onSubtractClicked() {
	Glib::ustring firstText = firstInputText.get_text();
	std::istringstream out1( firstText );
	out1 >> firstNumber;

	Glib::ustring secondText = secondInputText.get_text();
	std::istringstream out2( secondText );
	out2 >> secondNumber;

	result = firstNumber - secondNumber;

	resultInputText.set_text ( double_to_string (result) );
}

void MathDlg::onMultiplyClicked() {
	Glib::ustring firstText = firstInputText.get_text();
	std::istringstream out1( firstText );
	out1 >> firstNumber;

	Glib::ustring secondText = secondInputText.get_text();
	std::istringstream out2( secondText );
	out2 >> secondNumber;

	result = firstNumber * secondNumber;

	resultInputText.set_text ( double_to_string (result) );
}

void MathDlg::onDivideClicked() {
	Glib::ustring firstText = firstInputText.get_text();
	std::istringstream out1( firstText );
	out1 >> firstNumber;

	Glib::ustring secondText = secondInputText.get_text();
	std::istringstream out2( secondText );
	out2 >> secondNumber;

	result = firstNumber / secondNumber;

	resultInputText.set_text ( double_to_string (result) );
}
