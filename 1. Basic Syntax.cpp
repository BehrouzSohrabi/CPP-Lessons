// single line comments
/*
    another form for
    multi line
    comments
*/

#include <iostream> // import input output stream library

int main (){
    /*
        main function is the program's entry point. it's called by the operating system.
        the type of returned value of a function is specified before the function's name,
        which in this case is int, but the main function's return will be omitted.
    */

    int a {1}; // an integer with value of 1. the modern way.
    int b = 2; // another way to initialize a variable

    // print out the summation of a and b. cout comes from the included iostream library.
    // << concatenates strings
    // endl is the same as \n (new line)
    std::cout << "a + b = " << a+b << std::endl;

    // check the version of c++
    std::cout << "we are using c++ version: " << __cplusplus;

    // space, tabs, newlines are ignored
    // end of each line is marked with ;
    // indentation of scopes is done by { }

    // terminology
    //  - statement: a block of code a = 2
    //  - expression: a value or a part of a or entire statement 2, 3*7, a = 2, a = 2 + (3*7)
    //  - variables:
    //      . are typed with tokens (int, char, float, ...)
    //      . initialize with `{value}` or `= value`. {} is efficient.
    //      . example of undefined: int i;
    //  - identifier: what a variable is named with.
    //      . characters: A-Za-z0-9_
    //      . other non-iso-latin characters are accepted but may cause cross platform compiling issues
    //      . is case sensitive
    //      . under 31 characters long
    //      . _ at the beginning is not recommended since it's reserved for c++ global scope namespace
}