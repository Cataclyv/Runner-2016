#include "Model.h"

Model::Model() : _w{MODEL_WIDTH}, _h {MODEL_HEIGHT}, _collision(false)
{
    _balle = new Balle();
    _scoreJoueur = new Score();

    _elements.push_back(new Chunk(0, 1));
    _elements.push_back(new Chunk(120, 2));
}

Model::~Model() {
    delete _balle;
    for(MovableElement* x : _elements)
        delete x;
}


    // Quand le jeu sera Game Over, retourne FALSE
bool Model::nextStep() {
    for(auto e : _elements) {
        if(e->enJeu) //si le movable element sort du jeu
            _elements.erase(e);
        e->move();
    }

    if(_balle->getEnSaut() && _balle->getX() < HAUTEUR_SAUT)
    {
        _balle->setX(_balle->getX()+2);
        if(_balle->getX() >= HAUTEUR_SAUT )
            _balle->setEnSaut(false);
    }
    else if(!_balle->getEnSaut() && _balle->getY() > 10)
    {
        _balle->setY(_balle->getY()-2);
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


void Model::sautBalle()
{
    _joueur->enSaut();
}

bool Model::collision()
{
    return _collision;
}

int Model::getScore()
{
    return _joueur->getScore();
}

sf::Vector2f Model::getBalleDimension() const
{
    return sf::Vector2f(_joueur->getW(),_joueur->getH());
}

