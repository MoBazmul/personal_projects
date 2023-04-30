#include "noughts.h"

/*
* the computer move is randomly, so the need to use the two random functions
* the srand() and rand() functions. We've passed the start variable with the
* variable start which we initialised with 0, this helps the srand() to seed
* different values hence making our rand() function more random (though not very
* random). We've limit the random No. generation to 9 so that the c_move (computer
* move) is within the seed value and 9. Whenever a random value is passed as a c_move
* it is added to an array of comp_moves so that if the c_move makes the same move, the
* program checks (check_ele_in_array) the move within comp_move, recall the function if move is in comp_move
* if it is not in comp_move the program proceed to map the move to the inputs then add
* 'O' if that cell in board is empty, or recall the function if the cell is occupied
* the c_col and c_row variables holds the played row and column from the board.
*/

/* definition of global variable within the choose_comp_move source file
* (local to file but global to the program)
*/
int counter=0, c_move, start=0;
int comp_moves[4] = {0};
int c_row=0, c_col=0;
extern int inputs[SIZE][SIZE];

void choose_computer_move(char board[SIZE][SIZE]) {
    srand(start++);
    c_move = (rand()%9)+1;

    if (!check_element(comp_moves, c_move)) {
        comp_moves[counter] = c_move;
        counter++;
    }
    else if (check_element(comp_moves, c_move))
        choose_computer_move(board);

    for (int row=0; row<SIZE; ++row) {
        for (int col=0; col<SIZE; ++col) {
            if (inputs[row][col] == c_move) {
                while (board[row][col] != ' ')
                    return choose_computer_move(board);
                board[row][col] = 'O';
                c_row = row;
                c_col = col;
            }
        }
    }
}

