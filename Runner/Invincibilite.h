#ifndef INVINCIBILITE_H
#define INVINCIBILITE_H

#include "Bonus.h"
#include <iostream>

class Invincibilite : public Bonus
{
protected:
    int _duree;
public:
    Invincibilite();

    int getDuree();
    void setDuree(int duree);
};

#endif // INVINCIBILITE_H
