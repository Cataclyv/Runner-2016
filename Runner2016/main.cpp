#include <iostream>

#include "Bonus.h"
#include "MovableElement.h"
#include "Piece.h"
#include "Vol.h"
#include "Medikit.h"
#include "Invincibilite.h"
#include "Model.h"

using namespace std;

int main()
{
    Model _model;
    bool enJeu = true;

    while(enJeu) {
        enJeu = _model.nextStep();
    }
}

