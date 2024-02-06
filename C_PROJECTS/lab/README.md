#LAB1 - C CORE CONCEPTS

## Author
1. MoBazmul


## Program Description
- This is a simple C program that has covered most of the Core concepts of the C Programming Language. Including:
    i. Compiling
    ii. Looping
    iii. I/O Operation (not files)
    iv. Conditional Testing
    v. String Operations
    vi. Functions

- The program is divided into different functions which mostly are dependant to other functions within the program. Each 
function does a specific operation like adding, multiplying or splitting a string.


## Menu Definition and Usage
- At the start of the program, when we execute the executable file ".lab1 [debug | no-debug]" we get a menu of Operations.
- The Operations defined in the Menu includes:
    i. Addition of two numbers
    ii. Multiplication of two numbers
    iii. Reverse a String entered by the User
    iv. Compare two words or strings separated by a space

* If you type "exit" in the choice prompt, the program execution stops and exit

    ## How to run the program
        $ ./lab1 debug              /* Use debug to activate the break points statements or 'no-debug' to deactivate break points statements */
        $ ./tests                   /* To run and see all the tests, currently all the tests pass, try to change the function semantics or syntax
                                    to make some tests fail */
        $ cat -b Project1.txt       /* View all the tests recorded using the '$ script' command */


        # Functions
## getProgName
- This functions takes in a pointer to a string as its parameter and removes the leading dot and forward slash from the program 
name to get the raw name of the program. This function returns the name of the program passed as command line argument without
the leading dot and forward slash.

    ## Algorithm Description
    - The function starts by looping through the program name (pointer to a string), twice
    - Increment the pointer in each loop
    - After the second loop, the pointer points to the first letter or character of the program name
    - Return the address of the pointer (which points to the remaining characters which is, in our case, "lab1")


## Add
- This function takes two integer parameters, first and second, then calculate the sum of the two integers and return the total SUM 
of the two integers.

    ## Algorithm Description
    - return the addition of the two integer parameters passed to the
    function.


## Multiplication
- This function takes two floating parameters, first and second, then calculate the product of the two floats and return the product 
of the two floats.

    ## Algorithm Description
    - return the multiplication of the two floating parameters passed to the
    function.


## Reverse
- This function takes in a pointer to a string parameter, then return the reverse version of the passed string parameter.

    ## Algorithm Description
    - Takes in a string as the function parameter
    - Define another pointer to a string variable that will hold all of the reversed characters (NB: You can use the same parameter
    to hold the reversed string, but for simplicity reason it is better to define another pointer variable)
    - Set a Counter (in our case is 'i')
    - Loop through the parameter while increasing the Counter, till you reach the end of the string parameter
    - Loop again but from the new value of 'i' as the start case, set the first character of the new pointer to the value of the last 
    character of the parameter passed to the function. Decrement 'i'.
    - If 'i' is less than '0', end the Loop
    - Return the new pointer variable with new value, that is, the reversed string


## splitAndComp
- This function takes in a pointer to a string variable as its parameter, then splits the given string into two individual strings based
on the space delimiter. It then compares the two strings, if they are the same, the function return '1' or '0' if they are not the same.

    ## Algorithm Description
    - The function takes in a pointer to a string variable as its parameter
    - Define another pointer to string variable that will hold the second string after split
    - As you Loop through the string parameter, update the first pointer of the new defined string variable to point to the
    first character of the string parameter
    - The Loop continues till it matches the space delimiter, then ends.
    - The new defined pointer to string variable will now be pointing to the first string
    - Increment the string parameter to start pointing to the next character after the space delimiter
    - Compare the two strings and return '1' if they Match or '0' if they do not match


## compare
- This function takes in two pointer to string variables and compares each character within this two strings parameter. If all the 
characters in this strings match, then return '1' or '0' if they do not match.

    ## Algorithm Description
    - Takes in two string parameters 
    - Loop through each character of the two strings,
    - If all the character of the two strings exactly Match, the return '1' or '0' if they do not Match


## cleanString
- This function removes any leading (unnecessary spaces) in the string to be split and compared. It returns a new string with no unnecessary
leading white spaces.

    ## Algorithm Description
    - Takes in a string parameter.
    - Loop through the string to check for more than one white space, if more than one white space is present, remove the extra spaces
    - Return the new string with only one white space.


## readStr
- This function reads a set of character and stores them in a pointer to string variable (which acts like our buffer), then returns the
the sets of characters as one string.

    ## Algorithm Description
    - Define a character variable
    - Define a pointer to string variable (our buffer)
    - Use while Loop to get a character using the 'getc(stdin)' function, store the character inputted to the 'c' character
    - Update the first character of our string to hold the character 'c'
    - In each Loop character 'c' value changes to the new character inputted
    - Return our buffer containing all the characters as a string.


## debug
- This function checks the debugging feature of the program if it is active or inactive (on or off).

    ## Algorithm Description
    - This function takes a 'message' parameter.
    - This parameter defines the breaking-point message for the debugger.
    - If debug feature is 'on' allow printing of the breaking-point messages.


## main
- This is the heart of our program, it initializes and defines important features of our program. It takes in command-line argument one
of which is the debugging feature for our program, to activate or deactivate the break-points of our programs for easy debugging.


    # Tests
## addTest
- This is a function that test the add() function in our program through different test cases, test cases in this function includes:
    i. Test with positive numbers
    ii. Test with negative numbers
    iii. Test with zero


## multiplicationTest
- This is a function that test the multiplication() function in our program through different cases, test cases in this function includes:
    i. Test with the number 2 (very important because it might break our program, this is because, 2 + 2 is also equal 4 just like 2 * 2)
    ii. Test with other positive numbers
    iii. Test with negative numbers
    iv. Test with zero


## reverseStrTest
- This function test our reverse() function in our program through different tests. Such tests includes:
    i. Test with strings containing only letters
    ii. Test with string containing only numbers


## splitAndCompTest
- This function test our splitAndComp() function in our program through different tests. Such tests include:
    i. Test with a string with two same words
    ii. Test with a string of numbers with same numbers.



