#ifndef __DIALOG__H
#define __DIALOG__H

#include <gtkmm/window.h>
#include <gtkmm/scrollbar.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/entry.h>
#include <gtkmm/adjustment.h>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
private:
	Gtk::Scrollbar scrollBar;
	Gtk::VBox vBox;
	Gtk::Entry textInput;
};

#endif /* __DIALOG__H */
