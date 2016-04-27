#ifndef BONUS_H
#define BONUS_H

#include <iostream>
#include "MovableElement.h"

const int VAL_PIECE = 10;
const int VAL_BONUS = 50;
const int VAL_CHUNK = 100;

class Bonus : public MovableElement
{
protected:
    int _valPoints;
public:
    Bonus(int valeur);

    int getVal() const;
};

#endif // BONUS_H
