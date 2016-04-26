#include "Bonus.h"

Bonus::Bonus(int valeur) :
    MovableElement(100,100,0,0,0,0),
    _valPoints(valeur)
{
    std::cout<< "Un bonus a bien été crée" << std::endl;
}

int Bonus::getVal() const
{
    std::cout << _valPoints << std::endl;
}
