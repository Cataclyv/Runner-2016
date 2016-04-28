#include "Obstacle.h"

Obstacle::Obstacle(int x, int y, int h, int w, int dx, int dy):
    MovableElement(x, y, h, w, dx, dy)
{
    std::cout << "Obstacle(" << _x << ", " << _y << ") de hauteur " << _h << std::endl;
}
/*
void Obstacle::BlesserJoueur(Balle b)
{
    b.setPv(_dommages);
}

int Obstacle::getDommages() const
{
    return _dommages;
}
*/
