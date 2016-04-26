#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include "Balle.h"

const int MODEL_WIDTH = 800;
const int MODEL_HEIGHT = 600;

class Model
{
private :
    int _w, _h;
    Balle *_balle;
    std::vector<MovableElement*> _elements;
public:
    Model();
    ~Model();
    void nextStep();
    void deplacerBalle(bool aGauche);
};

#endif // MODEL_H
