#include "lab.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * multiplication: a function that calculate the multiplication
 * of two numbers entered by the user
 * @void: a void parameter, means the function does not take any parameter
 * return: the function returns the multiplication result of the 
 * two entered numbers
*/
double multiplication(double first, double second)
{
    debug("\nBreakpoint: Entering the Multiplication function");

    debug("\nBreakpoint: Calculating the Multiplication result");
    return (double) (first * second);
}


