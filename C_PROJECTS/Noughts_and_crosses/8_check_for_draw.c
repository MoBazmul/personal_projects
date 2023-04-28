#include "noughts.h"

/*
* if there is no win (check win function), then draws.
* return true for draw (occurs if no player wins the game)
*/

bool check_for_draw(char board[SIZE][SIZE])
{
    // check for draw
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; // game not over yet
            }
        }
    }

    return true;
}

