// Entrega AA2 - Primera fase PokENTI.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Mapa.h"
#include <fstream>
#include <string>

int main()
{
	bool gameState = true;
	char board[NUM_ROWS][NUM_COLUMNS];
	Symbols symbols = { '>', '<', '^', 'v', '-', 'P', 'X'};
	Mapa mapa = { 0, 0 };
	srand(time(NULL));
	Read();
	/*
	initializeBoard(symbols, board, mapa);
	printBoard(symbols, board, mapa);
	while (gameState == true)
	{
		actualizarBoard(symbols, board, mapa);
	}
	*/
}

