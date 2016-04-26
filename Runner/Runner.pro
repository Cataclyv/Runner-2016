TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Model.cpp \
    MovableElement.cpp \
<<<<<<< Updated upstream
    Bonus.cpp \
    Medikit.cpp \
    Piece.cpp \
    Invincibilite.cpp \
    Vol.cpp
=======
    Balle.cpp
>>>>>>> Stashed changes

QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra

LIBS += -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Model.h \
    MovableElement.h \
<<<<<<< Updated upstream
    Bonus.h \
    Medikit.h \
    Piece.h \
    Invincibilite.h \
    Vol.h
=======
    Balle.h
>>>>>>> Stashed changes

