#ifndef __MODELRECORD_H
#define __MODELRECORD_H
#include <gtkmm/treemodelcolumn.h>

class ModelRecord : public Gtk::TreeModel::ColumnRecord {
public:
	ModelRecord() {
		add( contactName );
		add( mobileNumber );
	}

	Gtk::TreeModelColumn<Glib::ustring> contactName;
	Gtk::TreeModelColumn<Glib::ustring> mobileNumber;
};

#endif /*_MODELRECORD_H*/
