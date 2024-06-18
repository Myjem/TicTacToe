#include "board.h"

Board::Board(int size, int winLength) : size(size), winLength(winLength), board(size, std::vector<char>(size, ' ')) {} //inicjalizacja tablicy

void Board::display() const {
    system("cls");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << board[i][j];
            if (j < size - 1) std::cout << " | ";
        }
        std::cout << std::endl;
        if (i < size - 1) {
            for (int j = 0; j < size; ++j) {
                std::cout << "---";
                if (j < size - 1) std::cout << "+";
            }
            std::cout << std::endl;
        }
    }
}

bool Board::makeMove(int row, int col, char player) {               // robi ruch
    if (row >= 0 && row < size && col >= 0 && col < size && board[row][col] == ' ') {       //sprawdza czy ruch jest w granicach planszy i czy pole jest puste jesli nie
        board[row][col] = player;                                                           //to zwraca false
        return true;
    }
    return false;
}

void Board::undoMove(int row, int col) {
    if (row >= 0 && row < size && col >= 0 && col < size) {                         //cofnięcie ruchu
        board[row][col] = ' ';
    }
}

bool Board::isOccupied(int row, int col) const {
    return board[row][col] != ' ';                      //zwraca true jesli pole jest zajete
}

char Board::checkWin() const {                          //sprawdza warunki wygranej dla kazdego pola w tablicy
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (board[i][j] != ' ' && checkWinFrom(i, j, board[i][j])) {
                return board[i][j];     //zwraca znak wygranego gracza
            }
        }
    }
    return ' ';
}

bool Board::checkRow(int row, char player) const {          //przechodzi przez wszystkie segmenty wiersza i sprawdza czy gracz wygral
    for (int i = 0; i <= size - winLength; ++i) {
        bool win = true;
        for (int j = 0; j < winLength; ++j) {
            if (board[row][i + j] != player) {
                win = false;
                break;
            }
        }
        if (win) return true;
    }
    return false;
}

bool Board::checkColumn(int col, char player) const {            //przechodzi przez wszystkie segmenty kolumny i sprawdza czy gracz wygral
    for (int i = 0; i <= size - winLength; ++i) {
        bool win = true;
        for (int j = 0; j < winLength; ++j) {
            if (board[i + j][col] != player) {
                win = false;
                break;
            }
        }
        if (win) return true;
    }
    return false;
}

bool Board::checkDiagonals(char player) const {                 //sprawdza wszyskie segmenty przekatnych
    for (int i = 0; i <= size - winLength; ++i) {
        for (int j = 0; j <= size - winLength; ++j) {
            bool winDiag1 = true;
            bool winDiag2 = true;
            for (int k = 0; k < winLength; ++k) {
                if (board[i + k][j + k] != player) {
                    winDiag1 = false;
                }
                if (board[i + k][j + winLength - k - 1] != player) {
                    winDiag2 = false;
                }
            }
            if (winDiag1 || winDiag2) {
                return true;
            }
        }
    }
    return false;
}

bool Board::checkWinFrom(int row, int col, char player) const {             //sprawdza wszystkie warunki wygranej od danego pola
    if (checkRow(row, player) || checkColumn(col, player) || checkDiagonals(player)) {
        return true;
    }
    return false;
}

bool Board::isFull() const {                //sprawdza czy board jest pelny
    for (const auto& row : board) {
        for (char c : row) {
            if (c == ' ') {
                return false;
            }
        }
    }
    return true;
}

int Board::getSize() const {        // size getter
    return size;
}