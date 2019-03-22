#ifndef __DIALOG_H
#define __DIALOG_H

#include <gtkmm/window.h>
#include <gtkmm/treeview.h>
#include <gtkmm/liststore.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/hvbox.h>

#include "modelrecord.h"

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:

private:
	Gtk::TreeView treeView;
	Glib::RefPtr<Gtk::ListStore> treeModel;	
	ModelRecord modelRecord;	
	
	Gtk::HBox hBox;
	Gtk::ScrolledWindow scrollWindow;
};

#endif /*__DIALOG_H*/
