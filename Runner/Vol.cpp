#include "Vol.h"

Vol::Vol():
    Bonus(50),
    _duree(5)
{
    std::cout << "Un bonus Vol a été crée" << std::endl;
}

int Vol::getDuree()
{
    return _duree;
}

void Vol::setDuree(int duree)
{
    _duree = duree;
    std::cout << "La duree de ce bonus est maintenant de : " << duree << std::endl;
}
