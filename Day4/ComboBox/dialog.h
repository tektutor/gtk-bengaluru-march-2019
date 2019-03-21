#ifndef __DIALOG_H
#define __DIALOG_H

#include <gtkmm/window.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/combobox.h>
#include <gtkmm/liststore.h>
#include <gtkmm/label.h>

#include <iostream>

#include "modelrecord.h"

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	void onGenderSelected();
private:
	Gtk::HBox hBox;
	Gtk::Label genderLabel;
	Gtk::ComboBox genderComboBox;
	ModelRecord modelRecord;
	Glib::RefPtr<Gtk::ListStore> comboModel;

};

#endif /* __DIALOG_H */
