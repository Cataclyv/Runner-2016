#ifndef SCORE_H
#define SCORE_H

#include <string>

const int VAL_PIECE = 10;
const int VAL_BONUS = 50;
const int VAL_CHUNK = 100;

class Score
{
private :
    int _nbPieces, _nbBonus, _nbChunks;
    std::string _pseudo;
public:
    Score();
    int score();

    void plusPiece();
    void plusBonus();
    void plusChunk();

    std::string getPseudo();
    void setPseudo(std::string pseudo);
};

#endif // SCORE_H
