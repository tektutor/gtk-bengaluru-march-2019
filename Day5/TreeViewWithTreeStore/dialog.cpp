#include "dialog.h"

Dialog::Dialog() {
	
	set_title ( "TreeView Demo" );
	set_border_width( 10 );
	set_size_request ( 200, 100 );

	treeModel = Gtk::TreeStore::create( modelRecord );
	treeView.set_model ( treeModel );

	Gtk::TreeModel::Row row1 = *(treeModel->append());
	row1[modelRecord.contactName] = "Sriram";
	Gtk::TreeModel::Row childRow1 = *(treeModel->append(row1.children()));	
	childRow1[modelRecord.mobileNumber] = "324-535-3451";
	Gtk::TreeModel::Row childRow2 = *(treeModel->append(row1.children()));	
	childRow2[modelRecord.mobileNumber] = "634-346-6791";
	Gtk::TreeModel::Row childRow3 = *(treeModel->append(row1.children()));	
	childRow3[modelRecord.mobileNumber] = "334-346-8888";

	Gtk::TreeModel::Row row2 = *(treeModel->append());
	row2[modelRecord.contactName] = "Nitesh";
	Gtk::TreeModel::Row childRow4 = *(treeModel->append(row2.children()));	
	childRow4[modelRecord.mobileNumber] = "324-535-3451";
	Gtk::TreeModel::Row childRow5 = *(treeModel->append(row2.children()));	
	childRow5[modelRecord.mobileNumber] = "634-346-6791";

	hBox.add ( treeView );
	scrollWindow.add ( hBox );

	add ( scrollWindow );

	treeView.append_column ( "Contact Name", modelRecord.contactName );
	treeView.append_column ( "Mobile Number", modelRecord.mobileNumber );
	
	show_all_children();
}

Dialog::~Dialog() {

}
