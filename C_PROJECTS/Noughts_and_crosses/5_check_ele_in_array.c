#include "noughts.h"

/*
* @check_element function checks for a specific element
* in an array. The function is passed with the array and
* the element as parameters. If an element is present the
* the function returns true else return false (not present)
*/

bool check_element(int *array, int elem)
{
    for (int i=0; i<(int)sizeof(array)/sizeof(*array); i++) {
        if (array[i] == elem)
            return true;
    }
    return (false);
}

