#include "lab.h"
#include <stdio.h>
#include <stdlib.h>

extern int DEBUG;

int main(int argc, char **argv)
{
    if(argc != 2 || argc > 2)
    {
        dprintf(2, "Error: Usage: %s [debug | no-debug]\n", getProgName(argv[0]));
        return 1;
    }

    if(compare(argv[1], "debug") == 1)
        DEBUG = 1;
    else if(compare(argv[1], "no-debug") == 1)
        DEBUG = 0;
    else
    {
        dprintf(2, "Error: supported CLA are [debug | no-debug]\n");
        return 1;
    }

    while(1)
    {
        char *choice = menu();

        if(compare(choice, "1") == 1) {
            int first;
            int second;
            char *str = malloc(sizeof(char));

            debug("\nBreakPoint: Input first number to add");

            printf("Enter Number: ");
            str = readStr();
            first = atoi(str);

            debug("\nBreakpoint: Input second number to add");

            printf("Second Number: ");
            str = readStr();
            second = atoi(str);

            free(str);
            int sum = add(first, second);
            dprintf(2, "Sum: %d\n", sum);
        } 

        else if(compare(choice, "2") == 1) {
            double first;
            double second;
            char *str = malloc(sizeof(char));
            if(str == NULL)
                exit(EXIT_FAILURE);

            debug("\nBreakpoint: Input the first Number to multiply");

            printf("Enter Number: ");
            str = readStr();
            first = (double) atof(str);

            debug("\nBreakpoint: Input the second number to multiply");
            printf("Second Number: ");
            str = readStr();
            second = (double) atof(str);

            free(str);

            double mul = multiplication(first, second);
            dprintf(2, "Multiplication: %lf\n", mul);
        }

        else if(compare(choice, "3") == 1) {
            char *reversedStr = malloc(sizeof(char));
            char *str = malloc(sizeof(char));

            printf("Enter a String or Word to reverse: ");
            str = readStr();
            reversedStr = reverse(str);
            free(str);

            dprintf(2, ">> Reversed String: %s\n", reversedStr);
            free(reversedStr);
        }

        else if(compare(choice, "4") == 1) {
            printf("Enter Two words to compare: ");
            char *str = malloc(sizeof(char));
            str = readStr();

            int stat = split(str);
            if(stat == 1)
                dprintf(2, ">> Words are the same\n");
            else
                dprintf(2, ">> Words are not the same\n");
        }

        else if(compare(choice, "exit") == 1)
            break;
    }

    return 0;
}

