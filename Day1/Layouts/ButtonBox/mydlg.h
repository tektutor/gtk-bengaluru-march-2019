#ifndef __MYDLG_H__
#define __MYDLG_H__

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/buttonbox.h>

class MyDlg : public Gtk::Window {
public:
	MyDlg();
	virtual ~MyDlg();
private:
	Gtk::ButtonBox buttonBox;
	Gtk::Button b1, b2, b3;
};

#endif /* __MYDLG_H__ */
