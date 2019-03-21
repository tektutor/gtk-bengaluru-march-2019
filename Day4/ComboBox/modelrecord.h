#ifndef __MODELCOLUMNS_H
#define __MODELCOLUMNS_H

#include <gtkmm/treemodel.h>
#include <gtkmm/treemodelcolumn.h>

#include <glibmm/ustring.h>

class ModelRecord: public Gtk::TreeModel::ColumnRecord {
public:
	ModelRecord() { 
		add ( firstName);
		add ( age);
	}

	Gtk::TreeModelColumn<Glib::ustring> firstName;
	Gtk::TreeModelColumn<int> age;
};

#endif /* __MODELCOLUMNS_H */
