#include "mainwindow.h"

MainWindow::MainWindow() {
	set_title ( "TreeView Demo" );
	set_border_width( 10 );
	set_size_request ( 200, 100 );

	hBox.set_valign ( Gtk::ALIGN_START );	

   Glib::ustring menuString = 
"<ui>"
"<menubar>"
"    <menu name='FileMenu' action='FileMenu'>"
"     <menuitem name='New' action='' />"
"      <placeholder name='FileMenuAdditions' />"
"    </menu>"
"  </menubar>"
"</ui>";
	
	uiManager = Gtk::UIManager::create();	

	uiManager->add_ui_from_string ( menuString );

	Gtk::Widget *pMenuBar = uiManager->get_widget("/MenuBar");


	hBox.pack_start ( *pMenuBar, Gtk::PACK_SHRINK );

	actionGroup = Gtk::ActionGroup::create();
	actionGroup->add(Gtk::Action::create("FileMenu", "File"));

	add ( hBox );	
	show_all_children();
}

MainWindow::~MainWindow() {

}
