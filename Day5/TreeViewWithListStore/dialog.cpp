#include "dialog.h"

Dialog::Dialog() {
	
	set_title ( "TreeView Demo" );
	set_border_width( 10 );
	set_size_request ( 200, 100 );

	treeModel = Gtk::ListStore::create( modelRecord );
	treeView.set_model ( treeModel );

	Gtk::TreeModel::Row row1 = *(treeModel->append());
	row1[modelRecord.contactName] = "Sriram";
	row1[modelRecord.mobileNumber] = "324-535-3451";

	Gtk::TreeModel::Row row2 = *(treeModel->append());
	row2[modelRecord.contactName] = "Nitesh";
	row2[modelRecord.mobileNumber] = "434-453-3345";

	hBox.add ( treeView );
	scrollWindow.add ( hBox );

	add ( scrollWindow );

	treeView.append_column ( "Contact Name", modelRecord.contactName );
	treeView.append_column ( "Mobile Number", modelRecord.mobileNumber );
	
	show_all_children();
}

Dialog::~Dialog() {

}
