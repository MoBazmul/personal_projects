#include "lab.h"

/**
 * sizeOfDatabase: A function that gets the size of the
 * database
 * @numberOfRecords: A parameter that defines the number 
 * of records in our database, which will then use to
 * calculate the size of the database
*/

long unsigned int sizeOfDatabase(int numberOfRecords)
{
    long unsigned int size = numberOfRecords * sizeof(details); 
    return size;
}

