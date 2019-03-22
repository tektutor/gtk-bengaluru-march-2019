#include "receiver.h"

Receiver::Receiver() {
}

Receiver::~Receiver() { }

void Receiver::onHelloSignal(Glib::ustring message) {
	std::cout << message << std::endl;
}
