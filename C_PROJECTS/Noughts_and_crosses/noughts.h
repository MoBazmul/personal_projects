#ifndef NOUGHTS_H
#define NOUGHTS_H

/*definition of libraries needed by the source code*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*definition of macros to be used by the programs*/
#define SIZE 3
#define true 1
#define false 0

/*definition of external functions*/
void draw_board(char board[SIZE][SIZE]);
void welcome(char board[SIZE][SIZE]);
void initialise_board(char board[SIZE][SIZE]);
void get_player_move(char board[SIZE][SIZE]);
void choose_computer_move(char board[SIZE][SIZE]);
bool check_element(int *array, int elem);
bool check_win(char board[SIZE][SIZE]);
bool check_for_draw(char board[SIZE][SIZE]);
int play_game(char board[SIZE][SIZE]);
char menu();
void save_score(int score);
struct score *load_scores(void);
void display_leaderboard(struct score *leaderboard);

/*definition of a structure to hold the player's name and score*/
struct score {
    char *player;
    int score;
};

#endif

