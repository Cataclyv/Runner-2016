TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Balle.cpp \
    Bonus.cpp \
    Invincibilite.cpp \
    Medikit.cpp \
    Model.cpp \
    MovableElement.cpp \
    Piece.cpp \
    Vol.cpp \
    Obstacle.cpp
    
QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra

LIBS += -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Balle.h \
    Bonus.h \
    Invincibilite.h \
    Medikit.h \
    Model.h \
    MovableElement.h \
    Piece.h \
    Vol.h \
    Obstacle.h

