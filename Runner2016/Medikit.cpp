#include "Medikit.h"

Medikit::Medikit(int x)
    : Bonus(x, VAL_BONUS), _soins(25)
{
    std::cout << "Un Medikit a bien été crée" << std::endl;
}

int Medikit::getSoins() const
{
    std::cout << _soins << std::endl;
    return _soins;
}

void Medikit::setSoins(int montantSoins)
{
    _soins = montantSoins;
    std::cout << "Les soins sont de" << _soins << std::endl;
}
