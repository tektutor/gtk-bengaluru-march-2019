#ifndef __DIALOG__H
#define __DIALOG__H

#include <gtkmm/window.h>
#include <gtkmm/spinbutton.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/adjustment.h>

#include <glibmm/main.h>
#include <iostream>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
private:
	Gtk::SpinButton daySpin, monthSpin, yearSpin;
	Gtk::HBox hBox;
	Glib::RefPtr<Gtk::Adjustment> dayAdjustment, monthAdjustment, yearAdjustment;
};

#endif /* __DIALOG__H */
