#include "lab.h"

/**
 * deleteRecord: remove a record from the database
 * @records: The database to where the records are stored
 * @numberOfRecords: Define the initial length of the database,
 * also used as a counter to help in the removing of records
 * return: void
*/

void deleteRecord(details **records, int *numberOfRecords) 
{
    if (*numberOfRecords == 0)
        return;

    (*numberOfRecords)--;
    *records = malloc((*numberOfRecords) * sizeof(details));
    if (*records == NULL)
        exit(EXIT_FAILURE);
}
