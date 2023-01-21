#include <iostream>
using std::printf;
using std::cout;

// first we should declare functions headers above main
int add_3(int i); // i is the functions argument
int multiply_5(int i);
float divide_reference(int &j, int &k); // by reference
int multiply_x(int i, int x = 8); // default value of argument y is passed as 8
float sum_array(float arr[]);

// or declare the whole functions before main
// void means this function will not return anything
void say_hi(){
    cout << "Hi!" << std::endl;
}

// main subroutine
int main() {

    // call a function which is declared before main or is in the headers
    say_hi();

    int i = 3;

    // use auto when the returned variable's type is unknown. we can also use int here.
    auto x = add_3(i);
    auto y = multiply_5(i);
    auto z = multiply_x(i, y);

    // print result
    printf("%i + 3 = %i\n", i, x);
    printf("%i * 5 = %i\n", i, y);
    printf("%i * %i = %i\n", i, y, z);

    float w = divide_reference(y, x);
    cout << "Address of j:" << &y << std::endl;
    printf("%i / %i = %f\n", y, x, w);

    z = multiply_x(i);
    cout << "Address of i:" << &i << std::endl;
    printf("%i * 8 = %i\n", i, z);

    float numbers[] = {w, float(x), float(y), float(z)};
    float v = sum_array(numbers);
    printf("Sum of w, x, y, z = %f\n", v);

    cout << std::endl << "Main subroutine executed" << std::endl;
}

// declare functions
int add_3(int i) {
    return i+3;
}

int multiply_5(int i) {
    return i*5;
}

// the benefit of using reference is that it uses the same memory address and
// does not create another in-scope instance for each argument
float divide_reference(int &j, int &k) {
    cout << "Address of j:" << &j << std::endl;
    return j/float(k);

    // Note: int/int = int;
    // to treat the division as float one of the variables must be float
    // we can do casting to float by passing them to float() method
}

int multiply_x(int i, int x) {
    cout << "Address of i:" << &i << std::endl;
    return i*x;
}

// array as argument
float sum_array(float arr[]){
    float summation {0};
    // loop through array
    for (auto *p = arr; *p; ++p){
        summation += *p;
    }
    return summation;
}