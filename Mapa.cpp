#include "Mapa.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

void initializeBoard(Symbols symbols, char board[NUM_ROWS][NUM_COLUMNS], Mapa mapa)
{
    for (int i = 0; i < NUM_ROWS; ++i)
    {
        for (int j = 0; j < NUM_COLUMNS; ++j)
        {
            if (i == 0 || i == NUM_ROWS-1 || j == 0 || j == NUM_COLUMNS - 1)
            {
                board[i][j] = symbols.pared;
            }
            else
            board[i][j] = symbols.empty;
        }
        
    }
    
    int maxPokemon = 10;

    int pokemonPlaced = 0;

    while (pokemonPlaced < maxPokemon)
    {
        int row = rand() % NUM_ROWS;
        int column = rand() % NUM_COLUMNS;
        if (board[row][column] == symbols.empty)
        {
            board[row][column] = symbols.pokemon;
            pokemonPlaced++;
        }
    }
    
    //Per posar les parets
    /*
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j = 2; ++j)
        {

        }
    }
    */

}

float* Read()
{
    int numRowsArray = 3;
    int numColsArray = 2;
    int valor;

    float** myArray2D;
    myArray2D = new float* [numRowsArray];
    for (int i = 0; i < numRowsArray; ++i) {
        myArray2D[i] = new float[numColsArray];
    }

    // Abrir el archivo
    std::ifstream archivo("config.txt");
    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        //return 1;
    }



    for (int i = 0; i < numRowsArray; ++i) {
        for (int j = 0; j < numColsArray; ++j) {
            char coma;
            archivo >> valor >> coma; // Leemos el valor y la coma
            myArray2D[i][j] = valor;
        }
    }
    archivo.close();

    //return *myArray2D;


    std::cout << "Array:" << std::endl;
    for (int i = 0; i < numRowsArray; ++i) {
        for (int j = 0; j < numColsArray; ++j) {
            std::cout << myArray2D[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Liberar la memoria
    for (int i = 0; i < numRowsArray; ++i) {
        delete[] myArray2D[i];
    }
    delete[] myArray2D;

    return 0;
}


void printBoard(Symbols symbols, char board[NUM_ROWS][NUM_COLUMNS], Mapa mapa)
{
    mapa.row;
    mapa.col;
    int posPlayerX = 2;
    int posPlayerY = 2;
    for (int i = mapa.row; i < NUM_ROWS_PRINT + mapa.row; ++i)
    {
        for (int j = mapa.col; j < NUM_COLUMNS_PRINT + mapa.col; ++j)
        {
            if (i == posPlayerX && j == posPlayerY)
            {
                std::cout << symbols.p_arriva << " ";
            }
            else {
                switch (board[i][j])
                {
                case 'X':
                    std::cout << symbols.pared << " ";
                    break;
                case '-':
                    std::cout << symbols.empty << " ";
                    break;
                case 'P':
                    std::cout << symbols.pokemon << " ";
                    break;
                default:
                    std::cout << symbols.empty << " ";
                    break;
                }
            }
                
        }
        std::cout << std::endl;
    }
}


bool pokemon(int currentRow, int currentColumn, Symbols symbols, char board[NUM_ROWS][NUM_COLUMNS])
{
    int nextRow = currentRow;
    int nextColumn = currentColumn;

    if (nextRow >= 0 && nextRow < NUM_ROWS && nextColumn >= 0 && nextColumn < NUM_COLUMNS)
    {
        return (board[nextRow][nextColumn] == symbols.pokemon);
    }
    
    return false;
}



void actualizarBoard(Symbols symbols, char board[NUM_ROWS][NUM_COLUMNS], Mapa mapa) {
    char num;
    std::cin >> num;
    if (num == 'd')
    {
        mapa.row++;
        std::system("cls");
        printBoard(symbols, board, mapa);
        std::cout << "si";
    }
    /*
    while (true) {
        if (GetAsyncKeyState(VK_UP)) {
            //Tecla presionada
            mapa.row++;
            std::system("cls");
            printBoard(symbols, board, mapa);
        }
        Sleep(100);
        if (GetAsyncKeyState(VK_DOWN)) {
            //Tecla presionada
            mapa.row++;
            std::system("cls");
            printBoard(symbols, board, mapa);
        }
        Sleep(100);
        if (GetAsyncKeyState(VK_LEFT)) {
            //Tecla presionada
            mapa.row++;
            std::system("cls");
            printBoard(symbols, board, mapa);
        }
        Sleep(100);
        if (GetAsyncKeyState(VK_RIGHT)) {
            //Tecla presionada
            mapa.row++;
            std::system("cls");
            printBoard(symbols, board, mapa);
        }
        Sleep(100);
        if (GetAsyncKeyState(VK_SPACE)) {
            //Tecla presionada

        }
        Sleep(100);
        if (GetAsyncKeyState(VK_ESCAPE)) {
            //Tecla presionada

        }
        Sleep(100);
    }
    */
}



/*
bool GetAsyncKeyState()
{
    if (GetAsyncKeyState(VK_UP)) {
        //Tecla presionada

    }
    Sleep(100);
    return true;
}
*/