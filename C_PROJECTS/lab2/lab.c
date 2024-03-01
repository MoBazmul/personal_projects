#include "lab.h"
#include "initDB.h"

static int ACCESS = 0;

int main(void)
{
    details *records = NULL;
    int numberOfRecords = 0;

    initializeDB(&records, &numberOfRecords);

    int choice;
    printf("MENU\n");
    printf("=======");
    while(1) {
        printf("\n1. Print All Records\n");
        printf("2. Print Number Of Records\n");
        printf("3. Print Size Of Database\n");
        printf("4. Add Record\n");
        printf("5. Delete Record\n");
        printf("6. Print Number Of Accesses To Database\n");
        printf("7. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printRecords(&records, numberOfRecords);
                ACCESS = numberOfDbAccess(ACCESS);
                break;
            case 2:
                recordsCount(numberOfRecords);
                ACCESS = numberOfDbAccess(ACCESS);
                break;
            case 3:
                long unsigned int size = sizeOfDatabase(numberOfRecords);
                printf("Database Size: %lu\n", size);
                ACCESS = numberOfDbAccess(ACCESS);
                break;
            case 4:
                addRecord(&records, &numberOfRecords);
                ACCESS = numberOfDbAccess(ACCESS);
                break;
            case 5:
                deleteRecord(&records, &numberOfRecords);
                ACCESS = numberOfDbAccess(ACCESS);
                break;
            case 6:
                printf("Number of Access to Database: %d\n", ACCESS);
                break;
            case 7:
                return 1;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    for (int i = 0; i < numberOfRecords; ++i) {
        free(records[i].shelfID);
        free(records[i].productName);
        free(records[i].address);
        free(records[i].zip);
    }
    free(records);

    return 0;
}


