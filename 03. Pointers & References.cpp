#include <iostream>
using std::printf;

// Pointers:
//  pointers hold the address of another variable in memory or stack.
//  pointers should be typed.

int main(){

    int x;
    x = 1;
    int y;
    y = x;

    printf("x = %d and y = %d\n", x, y);

    // the above terms can be implemented using pointers as follows:

    int *p; // a pointer named p, with int type.
    // same as: int* p; lets read it as: define an integer that is a pointer (*) called p.

    p = &x; // assign the address of x to the pointer p
    // let's read the above expression as: p equals to the "address of" (&) x
    // & is called the reference operator. or "address of" operator.
    // & returns the address of an object
    // now p holds the integer address of variable x.

    y = *p; // reference the value of a pointer (or what a pointer is pointed to)
    // let's read the above expression as: y equals to the "value of" (*) p
    // * is called the dereference operator. or "value of" operator.
    // * returns the value of an pointer
    // now y holds the value of variable x which is referenced by its pointer.

    printf("using the address of x (&x), value of y is: %d\n", y);

    // alternatively we can just write:
    int *P = &x; // define a pointer p and pass the address of x to it.
    int Y = *p; // define a variable y and pass the value of p to it.

    // we can also reassign by pointer
    *p = 3; // change the value of what is p pointed to into 3.

    printf("update the value of pointer p. *p = %d which is the same as x = %d\n", *p, x);


    // Referencing:
    const int &z = x; // two-way referencing
    // z is a reference to x and x is also a reference to z. it's basically an alias.

    printf("z = %d alias for x = %d\n", z, x);

    // Pointers vs Reference:
    // 1. we can't use * to deference a reference.
    // 2. we can't change a reference and it can't be re-assigned to another variable.
    // Therefore, references are better to be defined as const to prevent changing a variable by its reference (or alias).

    // Recap:
    const int &v = x;  // define reference or alias.
          int *w = &x; // define pointer that holds the address of x.
          
    printf("v = %d pointer address of w = %d\n", v, w);
}