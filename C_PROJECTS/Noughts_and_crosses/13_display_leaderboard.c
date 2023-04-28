#include "noughts.h"

/*
* @display_leaderboard reads data from a structure defined
* in the load_score functions and display its contents or data
*/

void display_leaderboard(struct score *leaderboard)
{
    printf("\n\tName        Score\n");
    printf("\n\t%s           %d", leaderboard->player, leaderboard->score);
}

