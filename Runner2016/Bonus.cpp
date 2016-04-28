#include "Bonus.h"

Bonus::Bonus() : MovableElement(100,100,TAILLE,TAILLE,0,0), _valPoints(50)
{}

Bonus::Bonus(int x, int valeur) :
    MovableElement(x,100,0,0,0,0), _valPoints(valeur)
{
    std::cout<< "Un bonus a bien été crée" << std::endl;
}

int Bonus::getVal() const
{
    std::cout << _valPoints << std::endl;
}
