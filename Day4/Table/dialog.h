#ifndef __DIALOG_H
#define __DIALOG_H

#include <gtkmm/window.h>
#include <gtkmm/table.h>
#include <gtkmm/grid.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/entry.h>
#include <gtkmm/label.h>
#include <gtkmm/button.h>
#include <gtkmm/scrolledwindow.h>

#include <iostream>
#include <list>
#include <iterator>
#include <map>

#include "userdetails.h"

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
private:
	void populateData();

protected:
	void onEditButtonClicked(int row);
	void onDeleteButtonClicked(int row);
private:
	Gtk::Table table;
	std::list<Gtk::Entry*> firstNameList;
	std::list<Gtk::Entry*> lastNameList;
	std::list<Gtk::Entry*> doorNoList;
	std::list<Gtk::Button*> editButtonList;
	std::list<Gtk::Button*> deleteButtonList;

	Gtk::VBox vBox;

	Gtk::Label labelFirstName, labelLastName, labelDoorNo;
	Gtk::Entry editFirstName,  editLastName, editDoorNo;
	Gtk::Grid grid;

	Gtk::ScrolledWindow scrollWindow;

	std::map<int, UserDetails*> userDetailsMap; 

};

#endif /* __DIALOG_H */
