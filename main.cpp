#include <iostream>
#include "board.h"
#include "ai.h"

int main() {
    int size, winLength, depth;
    std::cout << "Podaj rozmiar planszy: ";
    std::cin >> size;
    if(size <= 1)
    {
        std::cout << "Za maly rozmiar tablicy";
        return 1;
    }
    std::cout << "Podaj wymagana ilosc znakow w jednym ciagu aby wygrac: ";
    std::cin >> winLength;

    if (winLength > size || winLength < 0) {
        std::cerr << "Wymagana ilosc znaków nie moze byc wieksza niz rozmiar planszy" << std::endl;
        return 1;
    }
    std::cout << "Podaj glebokosc ai";
    std::cin >> depth;
    if(depth <= 0)
    {
        std::cout << "Za niska glebokoc" << std::endl;
        return 1;
    }
    

    Board board(size, winLength);
    AI ai('O', 'X', depth); // AI- O, Człowiek - X

    char currentPlayer = 'X';
    while (true) {
        board.display();
        if (currentPlayer == 'X') {
            int row, col;
            std::cout << "Gracz " << currentPlayer << ", podaj wiersz i kolumne: ";
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
                std::cout << "Nieprawidlowy ruch, sprobuj ponownie." << std::endl;
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