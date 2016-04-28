#include "Model.h"

Model::Model() : _w{MODEL_WIDTH}, _h {MODEL_HEIGHT}
{
    _balle = new Balle();
    _scoreJoueur = new Score();

    int ecart = 20;
    for(int i=MODEL_WIDTH ; i<NB_CHUNKS ; i++)
    {
        ajouterChunk(i*100+ecart);
    }
}

Model::~Model() {
    delete _balle;
    for(MovableElement* x : _elements)
        delete x;
}

void Model::ajouterChunk(int x) {
    int determination_chunk = rand()%100;
    if(determination_chunk < 50)
        _elements.push_back(new Chunk(x, 2));
    else if(determination_chunk < 75)
        _elements.push_back(new Chunk(x, 1));
    else
        _elements.push_back(new Chunk(x, 0));
}


    // Quand le jeu sera Game Over, retourne FALSE
bool Model::nextStep() {

    for(auto e : _elements) {

        if(!e->enJeu()) //si le MovableElement sort du jeu
            _elements.pop_back();

        if(_elements.size() < NB_CHUNKS) {  // crée un nouveau Chunk quand il en manque
            ajouterChunk(1020);
        }
        e->move();
    }

    if(_balle->getEnSaut() && _balle->getY() < HAUTEUR_SAUT)
    {
        _balle->setDy(1);
        if(_balle->getX() >= HAUTEUR_SAUT )
            _balle->setEnSaut(false);
    }
    else if(!_balle->getEnSaut() && _balle->getY() > 10)
    {
        _balle->setDy(-1);
    }
    _balle->move();

    for(auto e : _elements) {
        if(contientBalle(e)) {

        }
    }

    return false;
}

void Model::deplacerBalle(bool aGauche) {
    if(aGauche)
        _balle->setDx(-1);
    else
        _balle->setDx(1);
    _balle->move();
    _balle->setDx(0);
}

bool Model::contientBalle(Chunk *e) const
{
    bool contient = false;
    if((_balle->getX()+_balle->getW() > e->getX() && _balle->getX()+_balle->getW() < e->getX()+e->getW())
            || (_balle->getX() > e->getX() && _balle->getX() < e->getX()+e->getW()))
    {
        contient = true;
    }
    return contient;
}
