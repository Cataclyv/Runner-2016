#ifndef CHUNK_H
#define CHUNK_H

#include "MovableElement.h"
#include <vector>

class Chunk : public MovableElement
{
private :
    std::vector<MovableElement*> _conteneur;
public:
    Chunk();
};

#endif // CHUNK_H
