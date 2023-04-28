#include "noughts.h"

/* 
* @welcome program displays how to create
* a simple welcome message decorated with asterisk(*)
*/

void welcome(char board[SIZE][SIZE])
{
    printf("\t\t**********************************************\n");
    printf("\t\t*                                            *\n");
    printf("\t\t*     WELCOME TO THE \"UNBEATABLE NOUGHTS     *\n");
    printf("\t\t*             AND CROSSES\" GAME.             *\n");
    printf("\t\t*      THE BOARD LAYOUT IS SHOWN BELOW.      *\n");
    printf("\t\t*                                            *\n");
    printf("\t\t**********************************************\n\n");

    draw_board(board);

    printf("\n");

    printf("\tWhen prompted, enter the number corresponding to the square you want\n");
}

