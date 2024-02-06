#include "lab.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * readStr: a function to read set of characters
 * @void: a void parameter; means no argument should be passed
 * return: return the string that was read from the set of 
 * the inputted characters
*/
char *readStr(void)
{
    char *str = malloc(sizeof(char));
    if(str == NULL)
        exit(EXIT_FAILURE);

    char c;
    int i=0;

    while(c != '\n')
    {
        c = getc(stdin);
        str[i] = c;
        ++i;
    }

    str[i-1] = '\0';

    return str;
}