#ifndef MOVABLEELEMENT_H
#define MOVABLEELEMENT_H

class MovableElement
{
protected :
    int _x, _y;
    int _w, _h;
    int _dx, _dy;

public:
    MovableElement(int x, int y, int w, int h, int dx, int dy);
    void move();
};

#endif // MOVABLEELEMENT_H
