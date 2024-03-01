#include "lab.h"

/**
 * printRecords: print records from the database
 * @records: The database to where the records will be stored
 * @numberOfRecords: A parameter to keep track of the records
 * to be printed
 * return: void
*/

void printRecords(details **records, int numberOfRecords) 
{
    if (numberOfRecords == 0)
        printf("The DataBase is Empty\n");

    for (int i = 0; i < numberOfRecords; ++i) {
        printf("\n\tRecord %d\n", i + 1);
        printf("Store ID: %d\n", (*records)[i].storeID);
        printf("Product Name: %s\n", (*records)[i].productName);
        printf("Shelf ID: %s\n", (*records)[i].shelfID);
        printf("Street Address: %s\n", (*records)[i].address);
        printf("Zip Code: %s\n", (*records)[i].zip);
    }
}
