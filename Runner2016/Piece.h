#ifndef PIECE_H
#define PIECE_H

#include "Bonus.h"
#include "Balle.h"

class Piece : public Bonus
{
private:

public:
    Piece(int x);

    void applicationBonus(Balle* b);
};

#endif // PIECE_H
