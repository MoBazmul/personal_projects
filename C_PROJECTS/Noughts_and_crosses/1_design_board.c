#include "noughts.h"

/* 
* the draw board program draws the
* layout of the board and initialises its
* cells with the initial board data (characters)
*/

void draw_board(char board[SIZE][SIZE])
{
    printf("\t\t\t\t   -----------\n");
    printf("\t\t\t\t  | %c | %c | %c |\n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t\t\t   -----------\n");
    printf("\t\t\t\t  | %c | %c | %c |\n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t\t\t   -----------\n");
    printf("\t\t\t\t  | %c | %c | %c |\n", board[2][0], board[2][1], board[2][2]);
    printf("\t\t\t\t   -----------\n");
}

