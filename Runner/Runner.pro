TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

LIBS += -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

include(deployment.pri)
qtcAddDeployment()

