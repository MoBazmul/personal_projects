#include "noughts.h"

/*
* @save_score creates a new file that will hold the player
* name and the score (if win) in a text-based format
*/

void save_score(int score)
{
    FILE *leaderboard;
    char player_name[10];

    printf("\nEnter your name: ");
    scanf("%s", player_name);

    printf("Score %d for %s\n", score, player_name);
    leaderboard = fopen("leaderboard.txt", "wa+");

    fprintf(leaderboard, "\t%s %d\n", player_name, score);

    fclose(leaderboard);
}

