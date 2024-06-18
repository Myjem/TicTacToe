cmake_minimum_required(VERSION 3.28)
project(StrukturyDanychProjekt3)

set(CMAKE_CXX_STANDARD 14)

add_executable(TicTacToe
        main.cpp
        board.h
        board.cpp
        ai.h
        ai.cpp
        )
