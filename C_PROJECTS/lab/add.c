#include "lab.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * add: a function to add two numbers
 * @void: a void parameter, means the function does not take any parameter
 * return: the function returns the addition (sum) result of the 
 * two entered numbers
*/
int add(int first, int second)
{
    debug("\nBreakpoint: Entering the Add function");

    debug("\nBreakpoint: Calculating the Addition result");
    return (int) (first + second);
}
