#ifndef AI_H
#define AI_H

#include "board.h"
#include <limits>

class AI {
public:
    AI(char aiPlayer, char humanPlayer, int depthLimit);
    void makeMove(Board& board);
    int minimax(Board board, int depth, int alpha, int beta, bool maximizing) const;

private:
    char aiPlayer;
    char humanPlayer;
    int depthLimit;
    int int_max = std::numeric_limits<int>::max();
};

#endif // AI_H