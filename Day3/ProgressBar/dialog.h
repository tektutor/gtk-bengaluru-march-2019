#ifndef __DIALOG__H
#define __DIALOG__H

#include <gtkmm/window.h>
#include <gtkmm/progressbar.h>
#include <gtkmm/hvbox.h>

#include <glibmm/main.h>
#include <iostream>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	bool onTimerEmitted();
private:
	Gtk::ProgressBar progressBar;
	Gtk::HBox hBox;
};

#endif /* __DIALOG__H */
