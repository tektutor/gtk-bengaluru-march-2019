#ifndef __MYDLG_H__
#define __MYDLG_H__

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/hvbox.h>

class MyDlg : public Gtk::Window {
public:
	MyDlg();
	virtual ~MyDlg();
private:
	Gtk::HBox hBox1, hBox2;
	Gtk::VBox vBox;
	Gtk::Button b1, b2, b3, b4, b5, b6;
};

#endif /* __MYDLG_H__ */
