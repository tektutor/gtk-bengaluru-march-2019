#ifndef __MYDLG_H__
#define __MYDLG_H__

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class MyDlg : public Gtk::Window {
public:
	MyDlg();
	virtual ~MyDlg();

private:
	Gtk::Button button1;

};

#endif /* __MYDLG_H__ */
