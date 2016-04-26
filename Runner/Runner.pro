TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Model.cpp \
    MovableElement.cpp

QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra

LIBS += -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Model.h \
    MovableElement.h

