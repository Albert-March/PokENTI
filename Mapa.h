#pragma once
#include <iostream>
#define NUM_ROWS 20
#define NUM_COLUMNS 20
#define NUM_ROWS_PRINT 10
#define NUM_COLUMNS_PRINT 10

struct Symbols
{
    char p_derecha;
    char p_izquierda;
    char p_arriva;
    char p_abajo;
    char empty;
    char pokemon;
    char pared;
};

struct Mapa
{
    int row;
    int col;

};

	float* Read();

    void initializeBoard(Symbols symbols, char board[NUM_ROWS][NUM_COLUMNS], Mapa mapa);
    void printBoard(Symbols symbols, char board[NUM_ROWS][NUM_COLUMNS], Mapa mapa);
    void actualizarBoard(Symbols symbols, char board[NUM_ROWS][NUM_COLUMNS], Mapa mapa);