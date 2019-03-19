Install GTK+ 3.0 Development Library
++++++++++++++++++++++++++++++++++++
yum install -y gtk3-devel

Install GTKMM 3.0 C++ Wrapper
+++++++++++++++++++++++++++++
yum install -y gtkmm30-devel

Install C++ 7.3
+++++++++++++++
yum install -y centos-release-scl
yum install -y devtoolset-7-gcc*
scl enable devtoolset-7 bash

Testing if pkg-config is able to locate header & libs
+++++++++++++++++++++++++++++++++++++++++++++++++++++
pkg-config gtkmm-3.0 --cflags --libs
