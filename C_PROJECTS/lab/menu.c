#include "lab.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * menu: this function defines the choice of available operations
 * to the user
 * @void: a void parameter, no argument should be passed to the
 * function
 * return: return the choice (operation) entered by the User
*/
char *menu(void)
{
    char *choice;

    printf("\n\n\t1) Add 2 numbers (integers)\n\t2) Multiply 2 numbers (Floats)\n\t3) Read in string and reverse the string as output\n\t4) Enter 2 words\n");

    debug("\nBreakpoint: Asking for the choice of operation from the User");

    printf(">> ");
    choice = readStr();

    printf("\n");

    debug("Breakpoint: Returning User's Choice\n");
    return choice;
}


