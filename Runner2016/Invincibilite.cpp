#include "Invincibilite.h"

Invincibilite::Invincibilite(int x)
    : Bonus(x, VAL_BONUS), _duree(5)
{
    std::cout << "Un bonus Invincibilite a été crée" << std::endl;
}

int Invincibilite::getDuree() const
{
    std::cout << _duree << std::endl;
    return _duree;
}

void Invincibilite::setDuree(int duree)
{
    _duree = duree;
    std::cout << "La duree de ce bonus est de : " << duree << std::endl;
}
