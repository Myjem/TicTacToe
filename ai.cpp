#include "ai.h"
#include <algorithm>
#include <limits>

AI::AI(char aiPlayer, char humanPlayer, int depthLimit)
    : aiPlayer(aiPlayer), humanPlayer(humanPlayer), depthLimit(depthLimit) {}

int AI::minimax(Board board, int depth, int alpha, int beta, bool maximizing) const {
    char game_state = board.checkWin(); 

    if (game_state == aiPlayer) return 10;
    if (game_state == humanPlayer) return -10;
    if (board.isFull() || depth == 0) return 0;         //sprawdzenie czy ktorys gracz wygral

    if (maximizing) {
        int maxEval = -int_max;         //najnizsza mozliwa wartosc
        for (int i = 0; i < board.getSize(); ++i) {
            for (int j = 0; j < board.getSize(); ++j) {             //dla kazdego mozliwego pola na planszy
                if (board.isOccupied(i, j)) continue;               //jesli jest zajete, pomijamy
                board.makeMove(i, j, aiPlayer);                      //wykonujemy "testowy" ruch
                int eval = minimax(board, depth - 1, alpha, beta, false);   //wywołujemy rekursywnie minimax zmniejszajac glebokosc
                board.undoMove(i, j);               //cofamy "testowy" ruch
                maxEval = std::max(maxEval, eval);  //wybieramy wieksza wartosc z wartosci obecnej lub z rekurencji     
                alpha = std::max(alpha, eval);      
                if (alpha >= beta) return alpha;        //sprawdzanie warunku przeciecia
            }
        }
        return maxEval;
    } else {
        int minEval = int_max;
        for (int i = 0; i < board.getSize(); ++i) {
            for (int j = 0; j < board.getSize(); ++j) {
                if (board.isOccupied(i, j)) continue;
                board.makeMove(i, j, humanPlayer);
                int eval = minimax(board, depth - 1, alpha, beta, true);
                board.undoMove(i, j);
                minEval = std::min(minEval, eval);
                beta = std::min(beta, eval);
                if (beta <= alpha) return beta;                 //analogiczne dzialanie dla minimalizacji
            }
        }
        return minEval;
    }
}

void AI::makeMove(Board& board) {
    int bestVal = -int_max;
    int moveRow = -1;
    int moveCol = -1;           //zmienne do przechowania najlepszego ruchu

    for (int i = 0; i < board.getSize(); ++i) {
        for (int j = 0; j < board.getSize(); ++j) {
            if (board.isOccupied(i, j)) continue;
            board.makeMove(i, j, aiPlayer);                         //wykonujemy ruch, sprawdzamy czy obevny move jest lepszy niz poprzedni ,jesli tak to go zapisujemy, spradzamy dla
            int moveVal = minimax(board, depthLimit, -int_max, int_max, false); //kazdego miejsca na planszy
            board.undoMove(i, j);
            if (moveVal > bestVal) {
                moveRow = i;
                moveCol = j;
                bestVal = moveVal;
            }
        }
    }
    board.makeMove(moveRow, moveCol, aiPlayer);
}