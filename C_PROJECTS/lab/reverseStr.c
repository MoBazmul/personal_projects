#include "lab.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * reverse: a function that reverses a string passed
 * as its parameter
 * @str: the string to be reversed
 * return: a pointer to a set of reversed characters from
 * the str parameter
*/
char *reverse(char *str)
{
    debug("\nBreakpoint: Entering the Reverse Function");

    if(str == NULL)
        exit(EXIT_FAILURE);

    char *str1 = malloc(sizeof(char));
    if(str1 == NULL)
        exit(EXIT_FAILURE);

    int i = 0, j = 0;

    while(str[i] != '\0')
        i++;

    debug("\nBreakpoint: Reversing the string....");
    
    for(i = i - 1; i > -1; --i)
    {
        str1[j] = str[i];
        ++j;
    }

    str1[j++] = '\0';

    debug("\nBreakpoint: Returning the reversed string");
    return str1;
}

