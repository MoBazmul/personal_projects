#include "lab.h"
#include "initDB.h"
#include <assert.h>

void test_addRecord(details *records, int *numberOfRecords) 
{
    addRecord(&records, numberOfRecords);
    assert(*numberOfRecords == 1);
    printf("\t----------Add record test passed.-----------\n");
}


void test_deleteRecord(details *records, int *numberOfRecords) 
{
    initializeDB(&records, numberOfRecords);

    deleteRecord(&records, numberOfRecords);
    assert(*numberOfRecords == 5);
    printf("\n\t-----------Delete record test passed.-----------\n");
}


void test_printAllRecords(details *records, int *numberOfRecords) 
{
    initializeDB(&records, numberOfRecords);
    printf("\n\tPrinting all records:\n");
    printRecords(&records, *numberOfRecords);

    assert(*numberOfRecords == 6);

    printf("\t---------Print All Records Test passed successfully.-----------\n\n");
}


void test_printNumRecords(details *records, int numberOfRecords) 
{
    initializeDB(&records, &numberOfRecords);

    assert(numberOfRecords == 6);
    printf("\t----------Print number of records test passed.----------\n");
}


void test_printDatabaseSize(details *records, int *numberOfRecords) 
{
    initializeDB(&records, numberOfRecords);
    
    long unsigned int size = sizeOfDatabase(*numberOfRecords);

    assert(size == 504);
    printf("\n\t----------Print database size test passed.-----------\n");
}


void test_printNumAccesses(details *records, int *numberOfRecords) 
{
    int numAccess = 0;
    initializeDB(&records, numberOfRecords);

    printRecords(&records, *numberOfRecords);
    numAccess = numberOfDbAccess(numAccess);
    deleteRecord(&records, numberOfRecords);
    numAccess = numberOfDbAccess(numAccess);
    recordsCount(*numberOfRecords);
    numAccess = numberOfDbAccess(numAccess);
    
    assert(numAccess == 3);
    printf("\n\t-----------Print number of accesses test passed.-----------\n");
}

int main(void) {
    details *records = createRecord();
    int numberOfRecords = 0;

    test_addRecord(records, &numberOfRecords);
    test_deleteRecord(records, &numberOfRecords);
    test_printAllRecords(records, &numberOfRecords);
    test_printNumRecords(records, numberOfRecords);
    test_printDatabaseSize(records, &numberOfRecords);
    test_printNumAccesses(records, &numberOfRecords);

    printf("All tests passed successfully.\n");

    return 0;
}