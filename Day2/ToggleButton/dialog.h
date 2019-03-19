#ifndef __DIALOG_H__
#define __DIALOG_H__

#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>
#include <gtkmm/frame.h>
#include <gtkmm/hvbox.h>

#include <iostream>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	void onButtonClicked( int );
private:
	Gtk::CheckButton button1, button2, button3;
	Gtk::VBox vBox;
	Gtk::Frame frame;
};

#endif /* __DIALOG_H__ */
