#ifndef __MATH_DLG_H__
#define __MATH_DLG_H__

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/grid.h>
#include <gtkmm/frame.h>

#include <glibmm/ustring.h>

#include <sstream>
#include <iostream>
#include <limits>
#include <iomanip>
#include <string>

class MathDlg : public Gtk::Window {
public:
	MathDlg();
	virtual ~MathDlg();

protected:
	void onAddClicked();
	void onSubtractClicked();
	void onMultiplyClicked();
	void onDivideClicked();

private:
	std::string double_to_string ( const double value );

private:
	Gtk::Button addBttn, subtractBttn, multiplyBttn, divideBttn;
	Gtk::Entry firstInputText, secondInputText, resultInputText;
	Gtk::Label firstInputCaption, secondInputCaption, resultCaption;

	Gtk::Grid grid;
	Gtk::ButtonBox hBox;
	Gtk::VBox vBox;

	Gtk::Frame frame;

	double firstNumber, secondNumber, result;
};

#endif /* __MATH_DLG_H__ */
