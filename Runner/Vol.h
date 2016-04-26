#ifndef VOL_H
#define VOL_H

#include "Bonus.h"
#include <iostream>

class Vol : public Bonus
{
private:
    int _duree;
public:
    Vol();

    int getDuree();
    void setDuree(int duree);
};

#endif // VOL_H
