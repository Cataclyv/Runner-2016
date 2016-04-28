#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include "SFML/Graphics.hpp"
#include "Balle.h"
#include "Score.h"
#include "Chunk.h"

const int MODEL_WIDTH = 800;
const int MODEL_HEIGHT = 600;
const int HAUTEUR_SAUT = 100;

class Model
{
private :
    int _w, _h;
    unsigned int _argent;
    Balle *_balle;
    std::vector<MovableElement*> _elements;
    Score *_scoreJoueur;
    bool _collision;

public:
    Model(int w, int h);
    ~Model();

    void nextStep();
    void deplacerBalle(bool aGauche);
    void sautBalle();

    bool collision();

    int getScore();

    sf::Vector2f getBalleDimension() const ;
};

#endif // MODEL_H
