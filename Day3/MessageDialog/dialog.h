#ifndef __DIALOG__H
#define __DIALOG__H

#include <gtkmm/window.h>
#include <gtkmm/messagedialog.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/button.h>

#include <iostream>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	void onInfoButtonClicked();
	void onQuestionButtonClicked();
	void onWarningButtonClicked();
	void onErrorButtonClicked();

private:
	Gtk::Button infoButton, questionButton, warningButton, errorButton;
	Gtk::ButtonBox buttonBox;
};

#endif /* __DIALOG__H */
