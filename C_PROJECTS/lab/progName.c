#include "lab.h"


/**
 * getProgName: Get the name of the program passed as 
 * command line argument without the leading dot and slash
 * @str: parameter representing the program name (the first argument
 * in the command line arguments)
 * return: a string representing the program name without the leading 
 * dot and forward slash
*/
char *getProgName(char *str)
{
    for(int i=0; i < 2; i++)
        ++str;
    
    return str;
}




