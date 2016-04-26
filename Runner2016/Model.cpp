#include "Model.h"

Model::Model() : _w{MODEL_WIDTH}, _h {MODEL_HEIGHT}
{
    _balle = new Balle();
}

Model::~Model() {

}

void Model::deplacerBalle(bool aGauche) {
    if(aGauche)
        _balle->setDx(-1);
    else
        _balle->setDx(1);
    _balle->move();
}


