#include "lab.h"

/**
 * addRecord: Add a record to the database
 * @records: The database to where the records will be stored
 * @numberOfRecords: Define the initial length of the database,
 * also used as a counter to help in the adding of new records
 * return: void
*/

void addRecord(details **records, int *numberOfRecords) {
    (*numberOfRecords)++;
    *records = realloc(*records, sizeof(details) * (*numberOfRecords));
    if (*records == NULL)
        exit(EXIT_FAILURE);

    details *newEntry = createRecord();

    printf("\nEnter Store ID: ");
    scanf("%d", &newEntry[*numberOfRecords - 1].storeID);
    printf("Enter Product Name: ");
    scanf("%s", newEntry[*numberOfRecords - 1].productName);
    printf("Enter Shelf ID: ");
    scanf("%s", newEntry[*numberOfRecords - 1].shelfID);
    printf("Enter Address: ");
    scanf("%s", newEntry[*numberOfRecords - 1].address);
    printf("Enter Zip Code: ");
    scanf("%s", newEntry[*numberOfRecords - 1].zip);

    (*records)[*numberOfRecords - 1] = newEntry[*numberOfRecords - 1];
}
