#include "Chunk.h"
#include <cstdlib>

Chunk::Chunk(int type)
    : MovableElement{1, 1, 100, 100, -1, 0}
{
    _conteneur.resize(5);
    for(int j=0 ; j<_conteneur.size() ; j++)
        _conteneur[j] = nullptr;
    srand(time(NULL));

    switch(type)
    {

    case 1 : {
        int emplacement_bonus = rand()%4;
        int type_bonus = rand()%2;
        Bonus *_bonus;

        switch(type_bonus)
        {
        case 0 :
            _bonus = new Medikit(_x+TAILLE*emplacement_bonus);
            break;
        case 1 :
            _bonus = new Vol(_x+TAILLE*emplacement_bonus);
            break;
        case 2 :
            _bonus = new Invincibilite(_x+TAILLE*emplacement_bonus);
            break;
        }
        _conteneur[emplacement_bonus] = _bonus;
        for(int i=0 ; i<_conteneur.size() ; i++)
        {
            if(_conteneur[i] == nullptr)
                _conteneur[i] = new Piece(_x+TAILLE*i);
        }
         } break;

    case 2 : {
        } break;

    default : {

        } break;
    }
}
