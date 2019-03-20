#include <gtkmm/window.h>
#include <gtkmm/scrolledwindow.h>
#include <gtkmm/hvbox.h>
#include <gtkmm/textbuffer.h>
#include <gtkmm/textview.h>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
private:
	Gtk::HBox hBox;
	Gtk::ScrolledWindow scrollWindow;
	Glib::RefPtr<Gtk::TextBuffer> textBuffer;
	Gtk::TextView textView;
};


