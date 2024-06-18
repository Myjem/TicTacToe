#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board {
public:
    Board(int size, int winLength);
    void display() const;
    bool makeMove(int row, int col, char player);
    void undoMove(int row, int col);
    char checkWin() const;
    bool isFull() const;
    bool isOccupied(int row, int col) const;
    int getSize() const;

private:
    int size;
    int winLength;
    std::vector<std::vector<char>> board;
    bool checkRow(int row, char player) const;
    bool checkColumn(int col, char player) const;
    bool checkDiagonals(char player) const;
    bool checkWinFrom(int row, int col, char player) const;
};

#endif // BOARD_H