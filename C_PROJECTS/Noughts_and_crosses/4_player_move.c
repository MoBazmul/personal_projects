#include "noughts.h"

/*
* @get_player_move prompts for the user/player move
* the move should be greater or equal to 1 or less
* or equal to 9. The move is mapped to the inputs values
* if it matches the value, the program checks the position of the board, 
* determined by the input value, if that position is not empty 
* recall (recursion) the function, if it is empty update the cell with
* 'X'.
* if the player move is less than 1 and greater than 9 recall the function
*/

void get_player_move(char board[SIZE][SIZE])
{
    int p_move;

    printf("\n\n\t\t\t\t1 2 3\n");
    printf("\t\t\t\t4 5 6\n");
    printf("\tChoose your square\t7 8 9 : ");
    scanf("%d", &p_move);

    if ((p_move>=1) && (p_move<=9)) {
        for (int row=0; row<SIZE; ++row) {
            for (int col=0; col<SIZE; ++col) {
                if (inputs[row][col] == p_move) {
                    while (board[row][col] != ' ')
                        return get_player_move(board);
                    board[row][col] = 'X';
                }
            }
        }
    }
    else {
        printf("\tSquare number must be between 1 and 9\n");
        get_player_move(board);
    }
}

