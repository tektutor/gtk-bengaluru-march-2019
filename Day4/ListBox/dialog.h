#ifndef __DIALOG_H
#define __DIALOG_H

#include <gtkmm/window.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/listbox.h>
#include <gtkmm/label.h>
#include <gtkmm/listboxrow.h>

#include <iostream>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	void onRowSelected(Gtk::ListBoxRow *);
private:
	Gtk::ListBox listBox;
	Gtk::HBox hBox;
	Gtk::Label val1, val2, val3;
	Gtk::ListBox *row;
};

#endif /*__DIALOG_H*/
