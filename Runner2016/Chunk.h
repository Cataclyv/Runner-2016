#ifndef CHUNK_H
#define CHUNK_H

#include "Obstacle.h"
#include "Piece.h"
#include "Medikit.h"
#include "Vol.h"
#include "Invincibilite.h"
#include <vector>

class Chunk : public MovableElement
{
private :
    std::vector<MovableElement*> _conteneur; // soit Bonus soit Obstacle
public:
    Chunk(int x, int type);    // 1-> bonus, 2->obstacle
    void move();
};

#endif // CHUNK_H
