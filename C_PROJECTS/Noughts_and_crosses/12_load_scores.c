#include "noughts.h"

/*
* @load_scores function loads the player name and score
* from the file that were saved initially and save them in a structure
* this will enable easy access to the scores and players that played
* the game
*/

struct score *load_scores(void)
{
    struct score *results = malloc(sizeof(struct score));
    FILE *leaderboard;

    leaderboard = fopen("leaderboard.txt", "r");
    fscanf(leaderboard, "%s%d", results->player, &results->score);

    return results;
};

