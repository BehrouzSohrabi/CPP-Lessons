#include <iostream>
using std::printf;
using std::cout;

int main() {

    int a{0};
    int b{1};
    int c{2};
    int d{3};

    // any condition that returns true or anything other than 0 will execute the if block code
    if (a == b) {
        printf("a == b since a = %d and b = %d\n", a, b);
    } else if (a) {
        printf("a == true since a = %d \n", a);
    } else {
        printf("a == false and a != b since a = %d and b = %d\n", a, b);
    }

    // single line if statement
    if (b) printf("b is true since b = %d\n", b);

    // curly brace-less if statement
    if (c)
        printf("c is true since c = %d\n", c);

    // ternary conditional operator
    c = a == b ? 1 : 0;
    printf("c is set to %d\n", c);

    // switch statement
    switch (d) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }
}