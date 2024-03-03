#include "initDB.h"

/**
 * initializeDB: Initialize our Database with some data
 * @records: The database to where the records will be stored
 * @numberOfRecords: Define the initial length of the database,
 * also used as a counter to help in the adding of new records
 * return: void
*/

void initializeDB(details **records, int *numberOfRecords)
{
    details initialData[] = {
        {1, "Motherboard", "Shelf003", "Mombasa", "80100"},
        {2, "Monitor", "Shelf010", "Nakuru", "98200"},
        {3, "Keyboard", "Shelf008", "Kisumu", "78390"},
        {4, "Mouse", "Shelf013", "Nakuru", "98200"},
        {5, "RAM", "Shelf023", "Naivasha", "88900"},
        {6, "Charger", "Shelf015", "Mombasa", "80100"}
    };

    *numberOfRecords = sizeof(initialData) / sizeof(initialData[0]);

    *records = malloc(sizeof(details) * (*numberOfRecords));
    if (*records == NULL)
        exit(EXIT_FAILURE);
    
    for (int i = 0; i < *numberOfRecords; ++i) {
        (*records)[i] = initialData[i];
    }
}

