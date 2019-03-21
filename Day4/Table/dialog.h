#ifndef __DIALOG_H
#define __DIALOG_H

#include <gtkmm/window.h>
#include <gtkmm/table.h>
#include <gtkmm/grid.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/entry.h>
#include <gtkmm/label.h>
#include <gtkmm/button.h>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
private:
	void populateData();
private:
	Gtk::Table table;
	Gtk::Entry firstName[4], lastName[4], doorNo[4], street[4], city[4], state[4];
	Gtk::VBox vBox;

	Gtk::Label labelFirstName, labelLastName, labelGender, labelDoorNo, labelStreet, labelCity, labelState;
	Gtk::Entry editFirstName,  editLastName, editDoorNo, editStreet, editCity, editState;
	Gtk::Grid grid;

};

#endif /* __DIALOG_H */
