#include "lab.h"
#include <stdio.h>

int DEBUG = 0;

void debug(char *message)
{
    if(DEBUG == 1)
        printf("%s\n", message);
}


