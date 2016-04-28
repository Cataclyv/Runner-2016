#include "Bonus.h"

Bonus::Bonus() : MovableElement(100,100,TAILLE,TAILLE,0,0), _valPoints(50)
{}

Bonus::Bonus(int x, int valeur) :
    MovableElement(x,100,0,0,0,0), _valPoints(valeur)
{
    std::cout<< "Bonus créé aux coordonnées ("
             << _x << ", " << _y << ")";
}

int Bonus::getVal() const
{
    std::cout << _valPoints << std::endl;
}
