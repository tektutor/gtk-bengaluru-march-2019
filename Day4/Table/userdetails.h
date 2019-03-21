#include <glibmm/ustring.h>
#include <gtkmm/button.h>
#include <gtkmm/entry.h>

class UserDetails {
public:
	UserDetails() {
		ptrFirstName = ptrLastName = ptrDoorNo = NULL;
		ptrEditButton = ptrDeleteButton = NULL;
	} 

	UserDetails( Gtk::Entry *ptrFirstName, Gtk::Entry *ptrLastName, Gtk::Entry *ptrDoorNo, Gtk::Button *ptrEditButton, Gtk::Button *ptrDeleteButton ) {
		this->ptrFirstName = ptrFirstName;
		this->ptrLastName  = ptrLastName;
		this->ptrDoorNo    = ptrDoorNo;
		this->ptrEditButton = ptrEditButton;
		this->ptrDeleteButton = ptrDeleteButton;
	}
	
	void setDetails ( Gtk::Entry *ptrFirstName, Gtk::Entry *ptrLastName, Gtk::Entry *ptrDoorNo , Gtk::Button *ptrEditButton, Gtk::Button *ptrDeleteButton )  {
		this->ptrFirstName = ptrFirstName;
		this->ptrLastName  = ptrLastName;
		this->ptrDoorNo    = ptrDoorNo;
		this->ptrEditButton = ptrEditButton;
		this->ptrDeleteButton = ptrDeleteButton;
	}

	Gtk::Entry * getFirstName( ) {
		return ptrFirstName;
	}

	Gtk::Entry * getLastName( ) {
		return ptrLastName;
	}

	Gtk::Entry * getDoorNo( ) {
		return ptrDoorNo;
	}

	Gtk::Entry *ptrFirstName;
	Gtk::Entry *ptrLastName;
	Gtk::Entry *ptrDoorNo;
	
	Gtk::Button *ptrEditButton;
	Gtk::Button *ptrDeleteButton;
}; 
