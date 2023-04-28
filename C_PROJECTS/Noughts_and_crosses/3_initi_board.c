#include "noughts.h"

/*
* @init_board program initialises the board
* to empty cells, to set it ready; to insert
* users/players and computer moves
*/

void initialise_board(char board[SIZE][SIZE])
{
    for (int row=0; row<SIZE; ++row) {
        for (int col=0; col<SIZE; ++col)
            board[row][col] = ' ';
    }
}

