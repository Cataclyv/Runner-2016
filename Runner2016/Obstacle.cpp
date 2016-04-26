#include "Obstacle.h"

Obstacle::Obstacle(int x, int y, int h, int w, int dx, int dy):
    MovableElement(x,y,h,w,dx,dy)
{
}

void Obstacle::BlesserJoueur(Balle b)
{
    b.setPv(_dommages);
}

int Obstacle::getDommages() const
{
    return _dommages;
}
