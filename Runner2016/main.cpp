#include <iostream>

#include "Bonus.h"
#include "MovableElement.h"
#include "Piece.h"
#include "Vol.h"
#include "Medikit.h"
#include "Invincibilite.h"

using namespace std;

int main()
{
    Vol v1;
    Invincibilite i1;
    Medikit m1;
    Piece p1;

    v1.getVal();
    v1.getDuree();
    p1.getVal();
    m1.getSoins();
    m1.getVal();
    i1.getDuree();
    i1.getVal();
}

