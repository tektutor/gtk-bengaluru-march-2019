#ifndef __DIALOG_H__
#define __DIALOG_H__

#include <gtkmm/window.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/frame.h>
#include <gtkmm/hvbox.h>

#include <iostream>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	void onButtonClicked( int );
	void onButtonClicked1( Glib::ustring );
private:
	Gtk::RadioButton button1, button2, button3;
	Gtk::RadioButton button4, button5, button6;
	Gtk::VBox vBox1, vBox2;
	Gtk::HBox mainLayout;
	Gtk::Frame frame1;
	Gtk::Frame frame2;
};

#endif /* __DIALOG_H__ */
