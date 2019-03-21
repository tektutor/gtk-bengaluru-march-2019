#ifndef __MODELCOLUMNS_H
#define __MODELCOLUMNS_H

#include <gtkmm/treemodel.h>
#include <gtkmm/treemodelcolumn.h>

class ModelColumns : public Gtk::TreeModel::ColumnRecord {
public:
	ModelColumns() { 
		add ( genderName );
	}

private:
	Gtk::TreeModelColumn<Gtk::ustring> genderName;
};

#endif /* __MODELCOLUMNS_H */
