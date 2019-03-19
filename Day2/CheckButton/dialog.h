#ifndef __DIALOG_H__
#define __DIALOG_H__

#include <gtkmm/window.h>
#include <gtkmm/togglebutton.h>

#include <iostream>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	void onButtonClicked();
	void onButtonEntered();
	void onButtonLeave();
	void onButtonPressed();
	void onButtonReleased();
private:
	Gtk::ToggleButton button;
};

#endif /* __DIALOG_H__ */
