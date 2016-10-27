TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11
LIBS += -lncurses

SOURCES += main.cpp \
    graphicsengine.cpp

HEADERS += \
    graphicsengine.h

