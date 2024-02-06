#include "lab.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * split: a function that splits two words separated by 
 * a delimeter (can be bar space, tab space or any character
 * used as the delimeter), then compare the two strings 
 * resulted from the splitting
 * return: return 1 if the two strings Match or 0 if the
 * two strings do not Match
*/
int split(char *str)
{
    if(str == NULL)
        exit(EXIT_FAILURE);

    debug("\nBreakpoint: Asking User to input two words to compare");

    char *str1 = malloc(sizeof(char));
    char *str2 = malloc(sizeof(char));
    if(str1 == NULL || str2 == NULL)
        exit(EXIT_FAILURE);
    
    int i = 0, j = 0;

    debug("\nBreakpoint: Splitting the strings into two separate strings\n");
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            ++i;
            break;
        }

        str1[i] = str[i];
        ++i;
    }

    while(str[i] != '\0')
    {
        str2[j] = str[i];
        ++i;
        ++j;
    }

    str1 = cleanString(str1);
    str2 = cleanString(str2);

    debug("\nBreakpoint: Comparing the string\n");
    if(compare(str1, str2) == 1)
        return 1;
    else
        return 0;
}


/**
 * compare: a function to compare two strings
 * @str1: the first string
 * @str2: the second string to be compared
 * return: return 1 if the strings Match or 0 if
 * they do not Match
*/
int compare(char *str1, char *str2)
{
    if(str1 == NULL || str2 == NULL)
        exit(EXIT_FAILURE);

    int i = 0;

    while(str1[i] != '\0')
    {
        if(str1[i] != str2[i])
            return 0;
        ++i;
    }

    return 1;
}


/**
 * cleanString: removes any leading spaces from
 * the string passed as the parameter
 * @str: the string to be cleaned
*/
char *cleanString(char *str)
{
    if(str == NULL)
        exit(EXIT_FAILURE);

    while(*str == ' ')
        ++str;

    return str;
}




