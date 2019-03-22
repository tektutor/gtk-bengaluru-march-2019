#ifndef __DIALOG_H
#define __DIALOG_H

#include <gtkmm/window.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/menubar.h>
#include <gtkmm/menuitem.h>
#include <gtkmm/menu.h>
#include <gtkmm/uimanager.h>

#include <glibmm/ustring.h>

class MainWindow : public Gtk::Window {
public:
	MainWindow();
	virtual ~MainWindow();
protected:
	Glib::RefPtr<Gtk::ActionGroup> actionGroup;
private:
	Gtk::HBox hBox;
	Glib::RefPtr<Gtk::UIManager> uiManager;
};

#endif /*__DIALOG_H*/
