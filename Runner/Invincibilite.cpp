#include "Invincibilite.h"

Invincibilite::Invincibilite()
    : Bonus(50),
      _duree(5)
{
    std::cout << "Un bonus Invincibilite a été crée" << std::endl;
}

int Invincibilite::getDuree()
{
    return _duree;
}

void Invincibilite::setDuree(int duree)
{
    _duree = duree;
    std::cout << "La duree de ce bonus est de : " << duree << std::endl;
}
