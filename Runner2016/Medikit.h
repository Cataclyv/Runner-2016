#ifndef MEDIKIT_H
#define MEDIKIT_H

#include <iostream>
#include "Bonus.h"

class Medikit : public Bonus
{
private:
    int _soins;
public:
    Medikit();

    int getSoins() const;
    void setSoins(int montantSoins);
};

#endif // MEDIKIT_H
