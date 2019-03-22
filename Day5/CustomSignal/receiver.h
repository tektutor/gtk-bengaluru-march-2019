#ifndef __RECEIVER_H
#define __RECEIVER_H

#include <sigc++/sigc++.h>
#include <glibmm/ustring.h>
#include <iostream>

class Receiver : public sigc::trackable {
public:
	Receiver();
	virtual ~Receiver();
	void onHelloSignal(Glib::ustring);
};

#endif /* __RECEIVER_H*/
