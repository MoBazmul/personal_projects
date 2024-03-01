#ifndef LAB_H
#define LAB_H

#include <stdio.h>
#include <stdlib.h>

typedef struct details {
    int storeID;
    char productName[16];
    char shelfID[16];
    char address[32];
    char zip[16];
} details;

details *createRecord(void);
void addRecord(details **records, int *numberOfRecords);
void deleteRecord(details **records, int *numberOfRecords);
void printRecords(details **records, int numberOfRecords);
void recordsCount(int numberOfRecords);
long unsigned int sizeOfDatabase(int numberOfRecords);
int numberOfDbAccess(int numAccess);

/**
 * TESTS
*/

void test_addRecord(details *records, int *numberOfRecords);
void test_deleteRecord(details *records, int *numberOfRecords);
void test_printAllRecords(details *records, int *numberOfRecords);
void test_printNumRecords(details *records, int numberOfRecords);
void test_printDatabaseSize(details *records, int *numberOfRecords);
void test_printNumAccesses(details *records, int *numberOfRecords);

#endif


