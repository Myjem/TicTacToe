#include <iostream>
#include "board.h"
#include "ai.h"

int main() {
    int size, winLength;
    std::cout << "Podaj rozmiar planszy: ";
    std::cin >> size;
    std::cout << "Podaj wymagana ilosc znakow w jednym ciagu aby wygrac: ";
    std::cin >> winLength;

    if (winLength > size) {
        std::cerr << "Wymagana ilosc znaków nie moze byc wieksza niz rozmiar planszy" << std::endl;
        return 1;
    }

    Board board(size, winLength);
    AI ai('O', 'X', 10); // AI- O, Człowiek - X

    char currentPlayer = 'X';
    while (true) {
        board.display();
        if (currentPlayer == 'X') {
            int row, col;
            std::cout << "Gracz " << currentPlayer << ", podaj wiersz i kolumnę: ";
            std::cin >> row >> col;

            if (board.makeMove(row, col, currentPlayer)) {
                char winner = board.checkWin();
                if (winner != ' ') {
                    board.display();
                    std::cout << "Gracz " << winner << " wygrywa!" << std::endl;
                    break;
                }
                if (board.isFull()) {
                    board.display();
                    std::cout << "Remis!" << std::endl;
                    break;
                }
                currentPlayer = 'O';
            } else {
                std::cout << "Nieprawidłowy ruch, spróbuj ponownie." << std::endl;
            }
        } else {
            ai.makeMove(board);
            char winner = board.checkWin();
            if (winner != ' ') {
                board.display();
                std::cout << "Gracz " << winner << " wygrywa!" << std::endl;
                break;
            }
            if (board.isFull()) {
                board.display();
                std::cout << "Remis!" << std::endl;
                break;
            }
            currentPlayer = 'X';
        }
    }
    return 0;
}