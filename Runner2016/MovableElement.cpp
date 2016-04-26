#include "MovableElement.h"

MovableElement::MovableElement(int x, int y, int w, int h, int dx, int dy)
    : _x{x}, _y{y}, _w{w}, _h{h}, _dx{dx}, _dy{dy}
{
}

MovableElement::~MovableElement() {

}

void MovableElement::move()
{

}

int MovableElement::getX() const
{
    return _x;
}

int MovableElement::getY() const
{
    return _y;
}

int MovableElement::getDx() const
{
    return _dx;
}

int MovableElement::getDy() const
{
    return _dy;
}

int MovableElement::getH() const
{
    return _h;
}

int MovableElement::getW() const
{
    return _w;
}

void MovableElement::setDx(int dx)
{
    _dx = dx;
}

void MovableElement::setDy(int dy)
{
    _dy = dy;
}
