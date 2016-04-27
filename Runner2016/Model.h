#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include "Balle.h"
#include "Score.h"

const int MODEL_WIDTH = 800;
const int MODEL_HEIGHT = 600;

class Model
{
private :
    int _w, _h;
    Balle *_balle;
    std::vector<MovableElement*> _elements;
    Score *_scoreJoueur;
public:
    Model();
    ~Model();
    bool nextStep();
    void deplacerBalle(bool aGauche);
};

#endif // MODEL_H
