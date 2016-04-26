#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Balle.h"

class Obstacle : public MovableElement
{
private:
    int _dommages;
public:
    Obstacle(int x, int y, int h, int w, int dx, int dy);

    void BlesserJoueur(Balle b);

    int getDommages() const;
};

#endif // OBSTACLE_H
