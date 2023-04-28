#include "noughts.h"

/*
* @main is the start of the program that calls on the respective functions
* to start the game by defining the operations of the menu and initializing 
* score for the game.
* THE MENU FUNC CALLS ITSELF TWICE WHEN CHOOSING AN OPTION, FIGURE OUT WHY AND 
* CORRECT IT. I COULDN'T FIGURE OUT THE PROBLEM!
*/

int main()
{
    char boarding[SIZE][SIZE] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    welcome(boarding);

    int score, total_score = 0;
    char choice;

    while(1) {
        choice = menu();

        if (choice == '1') {
            score = play_game(boarding);
            total_score += score;
            printf("\n\t\tYour current score is: %d", total_score);
        }

        if (choice == '2') {
            save_score(total_score);
        }

        if (choice == '3') {
            struct score *leaderboard = load_scores();
            display_leaderboard(leaderboard);
        }

        if (choice == 'q') {
            return 0;
        }
    }
    return (0);
}
