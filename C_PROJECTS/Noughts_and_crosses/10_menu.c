#include "noughts.h"

/*
* @menu - defines the options for the user to trigger an operation
*/

char menu()
{
    char options;
    printf("\n\n\tEnter one of the following options:\n");
    printf("\t\t\t1 - Play the Game\n");
    printf("\t\t\t2 - Save your score on the leaderboard\n");
    printf("\t\t\t3 - Load and display leaderboard\n");
    printf("\t\t\tq - End the program\n");
    printf("\t1, 2, 3 or q? : ");
    options = getchar();

    return (options);
}

