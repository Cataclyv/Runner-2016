#ifndef BONUS_H
#define BONUS_H

#include <iostream>
#include "MovableElement.h"

class Bonus : public MovableElement
{
protected:
    int _valPoints;
public:
    Bonus(int valeur);

    int getVal() const;
};

#endif // BONUS_H
