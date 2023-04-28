#include "noughts.h"

/*
* @check_win function returns true if any three cells
* contain similar elements ('X' or 'O'), either in rows
* columns or diagonals. It returns false if there is no win
*/

bool check_win(char board[SIZE][SIZE]) {
    // check rows for win
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return true;
        }
    }

    // check columns for win
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
            return true;
        }
    }

    // check diagonals for win
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        || (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return true;
    }

    return false;
}

