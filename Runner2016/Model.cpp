#include "Model.h"

Model::Model() : _w{MODEL_WIDTH}, _h {MODEL_HEIGHT}
{
    _balle = new Balle();
    _scoreJoueur = new Score();
}

Model::~Model() {

}

    // Quand le jeu sera Game Over, retourne FALSE
bool Model::nextStep() {
    for(auto e : _elements) {
        e->move();
    }
    return false;
}

void Model::deplacerBalle(bool aGauche) {
    if(aGauche)
        _balle->setDx(-1);
    else
        _balle->setDx(1);
    _balle->move();
}


