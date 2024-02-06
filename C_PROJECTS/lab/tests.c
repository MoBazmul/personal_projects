#include "lab.h"
#include <stdio.h>

/**
 * addTest: a function to define the test cases for
 * the addition function
*/
int addTest(void)
{
    int i = 0;

    printf("\n------------------------ Addition -----------------------\n");
    if(add(2, 2) != 4)
    {
        printf("Test case: add(2, 2) != 4 ----- Failed\n");
        ++i;
    }

    if(add(0, 0) != 0)
    {
        printf("Test case: add(0, 0) != 0 ----- Failed\n");
        ++i;
    }

    if(add(-8, -1) != -9)
    {
        printf("Test case: add(-8, -1) != -9 ----- Failed\n");
        ++i;
        if(i == 3)
            printf("\tAll Test Cases Failed\n\n");
        else if(i == 1)
            printf("\t%d Test Case Failed\n\n", i);
        else
            printf("\t%d Test Cases Failed\n\n", i);
        return 0;
    }

    printf("All Test Cases Passed!\n\n");
    return 1;
}


/**
 * multiplicationTest: a function to define the test cases for
 * the multiplication function
*/
int multiplicationTest(void)
{
    int i = 0;

    printf("\n--------------------- Multiplication ---------------------\n");
    if(multiplication(2, 2) != 4)
    {
        printf("Test case: multiplication(2, 2) != 4 ----- Failed\n");
        ++i;
    }

    if(multiplication(3, 3) != 9)
    {
        printf("Test case: multiplication(3, 3) != 9 ----- Failed\n");
        ++i;
    }

    if(multiplication(0, 0) != 0)
    {
        printf("Test case: multiplication(0, 0) != 0 ----- Failed\n");
        ++i;
    }

    if(multiplication(-3, -3) != 9)
    {    
        printf("Test case: multiplication(-3, -3) != 9 ----- Failed\n");
        ++i;
        if(i == 4)
            printf("\tAll Test Cases Failed\n\n");
        else if(i == 1)
            printf("\t%d Test Case Failed\n\n", i);
        else
            printf("\t%d Test Cases Failed\n\n", i);
        return 0;
    }

    printf("All Test Cases Passed!\n\n");
    return 1;
}


/**
 * reverseStrTest: a function to define the Test Cases for the
 * reverseStr function
*/
int reverseStrTest(void)
{
    int i = 0;

    printf("\n--------------------- Reverse String ---------------------\n");
    if(compare(reverse("dog"), "god") == 0)
    {
        printf("\nTest Case compare(reverseStr(\"dog\"), \"god\") ------ Failed\n");
        ++i;
    }

    if(compare(reverse("1234"), "4321") == 0)
    {
        printf("\nTest Case compare(reverseStr(\"1234\"), \"4321\") ------ Failed\n");
        ++i;
        if(1 == 2)
            printf("\tAll Test Cases Failed\n\n");
        else if(i == 1)
            printf("\t%d Test Case Failed\n\n", i);
        else
            printf("\t%d Test Cases Failed\n\n", i);
        return 1;
    }

    printf("All Test Cases Passed!\n\n");
    return 0;
}


/**
 * splitAndCompTest: a function to define the Test Cases for
 * the splitAndComp function
*/
int splitAndCompTest(void)
{
    int i = 0;

    printf("\n--------------------- Compare Strings --------------------\n");
    if(split("dog dog") != 1)
    {
        printf("\nTest Case split(\"dog dog\") != 1 ----- Failed\n");
        ++i;
    }

    if(split("123 123") != 1)
    {
        printf("\nTest Case split(\"dog dog\") != 1 ----- Failed\n");
        ++i;
        if(1 == 2)
            printf("\tAll Test Cases Failed\n\n");
        else if(i == 1)
            printf("\t%d Test Case Failed\n\n", i);
        else
            printf("\t%d Test Cases Failed\n\n", i);
        return 1;
    }

    printf("All Test Cases Passed!\n\n");
    return 0;
}


int main(void)
{
    addTest();
    multiplicationTest();
    reverseStrTest();
    splitAndCompTest();

    return 0;
}


