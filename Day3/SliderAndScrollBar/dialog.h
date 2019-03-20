#include <gtkmm/window.h>
#include <gtkmm/scale.h>
#include <gtkmm/scrollbar.h>
#include <gtkmm/progressbar.h>
#include <gtkmm/hvbox.h>
//#include <gtkmm/adjustment.h>

#include <glibmm/main.h>

class Dialog : public Gtk::Window {
public:
	Dialog();
	virtual ~Dialog();
protected:
	bool onTimeout();
private:
	Gtk::ProgressBar progressBar;
	Gtk::VBox vBox;
	Gtk::Scale slider;
	Gtk::Scrollbar scrollBar;
	//Gtk::Adjustment sliderAdjustment;	
	//Gtk::Adjustment scrollBarAdjustment;
};


