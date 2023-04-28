#include "noughts.h"

/*
* @play_game function initialises the board and make  it ready to insert moves
* the player(human player) starts making the move then the computer follows 
* after each move the program checks if there is a win or draw so that it can
* terminate the loop
*/

int play_game(char board[SIZE][SIZE])
{
    initialise_board(board);
    printf("\n\n\t\t\t\t_________________\n\n");
    printf("\t\t\t\t The Game Begins\n");
    printf("\t\t\t\t_________________\n\n");
    draw_board(board);

    while(1) {
        get_player_move(board);
        draw_board(board);
        if (check_win(board)) {
            printf("\tYou Win!\n");
            return 1;
        } else if (!check_win(board)) {
            if (check_for_draw(board))
                return 0;
        }
        choose_computer_move(board);
        draw_board(board);
        if (check_win(board)) {
            printf("\tYou Lost!\n");
            return 0;
        } else if (!check_win(board)) {
            if (check_for_draw(board))
                return -1;
        }
        printf("\n\tThe Computer played at Row %d, Column %d\n\n", c_row+1, c_col+1);
    }
}
