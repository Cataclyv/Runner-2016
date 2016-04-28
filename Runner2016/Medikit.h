#ifndef MEDIKIT_H
#define MEDIKIT_H

#include <iostream>
#include "Bonus.h"
#include "Balle.h"

class Medikit : public Bonus
{
private:
    int _soins;
public:
    Medikit(int x);

    void applicationBonus(Balle* b);

    int getSoins() const;
    void setSoins(int montantSoins);
};

#endif // MEDIKIT_H
