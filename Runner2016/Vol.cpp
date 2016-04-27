#include "Vol.h"

Vol::Vol()
    : Bonus(VAL_BONUS), _duree(5)
{
    std::cout << "Un bonus Vol a été crée" << std::endl;
}

Vol::~Vol() {

}

int Vol::getDuree() const
{
    std::cout << _duree << std::endl;
    return _duree;
}

void Vol::setDuree(int duree)
{
    _duree = duree;
    std::cout << "La duree de ce bonus est de : " << duree << std::endl;
}
