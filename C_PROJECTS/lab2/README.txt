                # Lab2 - Memory And Structures

## Authors
1. 
2.

This is a C program that implements an in-memory database for storing records of products. The program allows users to add records, 
delete records, print all records, print the number of records, print the size of the database, and print the number of accesses to 
the database. The database is stored in dynamic memory using memory allocation (malloc) and memory is released using the free function.

## How to Run this program
1. On the command line (cmd or linux terminal) run the executable file "lab2"
    - On linux " $./lab2 "
    - On Windows " >lab2.exe "

2. To run the tests, run the executable "tests"
    - On linux  " $./tests "
    - On Windows  " >tests.exe "

3. If the executables are not present then use the below command to compile the program first to get the executables
- On Linux (lab2 program) " $ gcc addRecord.c sizeOfDB.c printRecords.c numberOfRecords.c dbAccess.c deleteRecord.c createRecord.c initDB.c lab.c -o lab2 "
- On Linux (tests program)  " $ gcc addRecord.c sizeOfDB.c printRecords.c numberOfRecords.c dbAccess.c deleteRecord.c createRecord.c tests.c initDB.c -o tests "

- On Windows (lab2 program) " $ gcc addRecord.c sizeOfDB.c printRecords.c numberOfRecords.c dbAccess.c deleteRecord.c createRecord.c initDB.c lab.c -o lab2.exe "
- On Windows (tests program)  " $ gcc addRecord.c sizeOfDB.c printRecords.c numberOfRecords.c dbAccess.c deleteRecord.c createRecord.c tests.c -o tests.exe "


## Functions

### addRecord()
This function adds a new record to the database. It prompts the user to input details of the new record such as StoreID, 
Product Name, ShelfID, Street Address, and Zip Code. The function dynamically allocates memory for the new record and expands
the database to accommodate the new record.

### deleteRecord()
This function deletes the last record from the database. It dynamically deallocates memory for the last record and reduces the 
size of the database accordingly.

### printAllRecords()
This function prints all records stored in the database. It iterates over each record in the database and prints details such as 
StoreID, Product Name, ShelfID, Street Address, and Zip Code.

### printNumRecords()
This function prints the number of records currently stored in the database. It simply outputs the total count of records in the database.

### printDatabaseSize()
This function prints the size of the database in bytes. It calculates the size of the database by multiplying the number of records by the 
size of each record structure.

### printNumAccesses()
This function prints the number of accesses made to the database since the program started. It tracks the number of accesses made to the database, 
including additions, deletions, and printing of records.

## Tests
The program includes test cases to ensure the correct functionality of each function:

- `test_addRecord()`: This test function verifies the addRecord() function by adding a record and checking if the number of records increases by 1.
- `test_deleteRecord()`: This test function verifies the deleteRecord() function by adding a record, deleting it, and checking if the number of 
   records decreases by 1.
- `test_printAllRecords()`: This test function verifies the printAllRecords() function by adding multiple records and checking if all records are 
   printed correctly.
- `test_printNumRecords()`: This test function verifies the printNumRecords() function by adding multiple records and checking if the correct number 
   of records is printed.
- `test_printDatabaseSize()`: This test function verifies the printDatabaseSize() function by adding multiple records and checking if the correct size 
   of the database is printed.
- `test_printNumAccesses()`: This test function verifies the printNumAccesses() function by adding multiple records and calling other functions to 
   increase the number of accesses, then checking if the correct number of accesses is printed.

To run the tests, compile the program and execute the test functions in a separate test file.




