#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include "Balle.h"
#include "Score.h"
#include "Chunk.h"

const int MODEL_WIDTH = 800;
const int MODEL_HEIGHT = 600;
const int HAUTEUR_SAUT = 100;
const int NB_CHUNKS = 10;

class Model
{
private :
    int _w, _h;
    unsigned int _argent;
    Balle *_balle;
    std::vector<Chunk*> _elements;
    Score *_scoreJoueur;

public:
    Model();
    ~Model();

    void ajouterChunk(int x);
    bool nextStep();
    void deplacerBalle(bool aGauche);

    bool contientBalle(Chunk *c) const;
};

#endif // MODEL_H
