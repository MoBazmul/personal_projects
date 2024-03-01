#include "lab.h"

/**
 * createRecord: Create a new container / database and
 * initialize it's memory capacity
*/

details *createRecord(void)
{
    details *detail = (details *) malloc(sizeof(details));
    if(detail == NULL)
        exit(EXIT_FAILURE);

    return detail;
}
