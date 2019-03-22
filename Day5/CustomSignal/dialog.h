#ifndef __DIALOG_H
#define __DIALOG_H

#include <gtkmm/window.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/button.h>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
	typedef sigc::signal<void, Glib::ustring> type_signal_hello;
	type_signal_hello signal_hello();	
protected:
	type_signal_hello m_signal_hello;
	void onEmitSignalClicked();
private:
	Gtk::HBox hBox;
	Gtk::Button emitCustomSignal;

};

#endif /* __DIALOG_H */
