#ifndef MODEL_H
#define MODEL_H

#include "Balle.h"
#include "Score.h"
#include "Chunk.h"
#include <vector>
#include <unistd.h>

const int MODEL_WIDTH = 800;
const int MODEL_HEIGHT = 600;
const int HAUTEUR_SAUT = 100;
const int NB_CHUNKS = 10;

class Model
{
private :
    int _w, _h;
    Balle *_balle;
    std::vector<Chunk*> _elements;
    Score *_scoreJoueur;
    int _degatsObstacle;

public:
    Model();
    ~Model();

    void ajouterChunk(int x);
    bool nextStep();
    void deplacerBalle(bool aGauche);

    bool contientBalle(Chunk *c) const;
};

#endif // MODEL_H
