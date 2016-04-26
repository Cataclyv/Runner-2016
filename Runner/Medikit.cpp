#include "Medikit.h"

Medikit::Medikit()
    : Bonus(50),
      _soins(25)
{
    std::cout << "Un Medikit a bien été crée" << std::endl;
}

int Medikit::getSoins()
{
    return _soins;
}

void Medikit::setSoins(int montantSoins)
{
    _soins = montantSoins;
    std::cout << "Les soins sont maintenant de" << _soins << std::endl;
}
