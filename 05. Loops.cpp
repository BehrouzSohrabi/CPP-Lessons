#include <iostream>
using std::printf;
using std::cout;

int main() {

    int i {0};

    // Declare an array of integers and initialize it with some values
    int array[] {10,11,12,13,14};
    
    // Calculate the length of the array by dividing its size in bytes by the size of a single element of the same data type
    int array_length = sizeof(array) / sizeof(int);

    // A while loop that iterates through the array and print its values
    while (i<array_length) {
        printf("The value stored in array on index %i is %i\n", i, array[i]);
        i++;
    }

    // A do-while loop that iterates through the array backwards
    do{
        i--;
        printf("The value stored in array on index %i is %i\n", i, array[i]);
    } while (i>0);

    // Let's declare a variable to store the value we want to find in the array
    int find {11};
    while (i<array_length) {
        if (array[i] == find) {
            printf("Found %i in array on index %i\n", find, i);
            break; // Use the break statement to exit the loop when the value is found
        }
        i++;
    }

    printf("The last iterated index was %i\n", i);
    
    // Let's skip 13
    int skip {13};
    while (i<array_length) {
        if (array[i] == skip) {
            i++;
            continue; // skip the rest of this iteration and jump back to the beginning of the loop
        }
        printf("The value stored in array on index %i is %i\n", i, array[i]);
        i++;
    }

    // Declare a char array and initialize it with a string
    char string[] {"String!"};

    // Calculate the length of the char array
    int string_length = sizeof(string) / sizeof(char);
    
    cout << "String Length is: " <<  string_length << std::endl; // outputs 8 instead of 7, which is not what expected since a null character (\0) is appended to char arrays which requires one more byte

    cout << std::endl << "Iterate Through the char array:" << std::endl;
    for (int i{0}; i<string_length; ++i){
        printf("%i:%c ", i, string[i]);
    } // a null character appears at the end

    cout << std::endl << "Without getting the null character:" << std::endl;
    for (int i{0}; string[i]; ++i){ // another way to iterate through a char array
        printf("%i:%c ", i, string[i]);
    }

    cout << std::endl << "Using pointers:" << std::endl;
    for (auto *p = string; *p; ++p){
        printf("%i:%c\n", p, *p);
    }

    cout << "Using `Range-Based For` with addressing the array elements:" << std::endl;
    for (const auto &e:string){ // element (e) in container (array)
        printf("%c", e);
    }

    cout << std::endl << "Iterate from 0 to 6:" << std::endl;
    for (int day {0}; day<7; ++day){
        // Use a switch statement to print a message based on the iterated value
        switch (day){
        case 0:
            cout << "Sunday!" << std::endl;
            break; // Use the break statement to exit the switch statement
        case 3:
        default: // usually we put default at the end, but it doesn't matter.
            cout << "Rest of the week..." << std::endl;
            break;
        case 5:
            cout << "Friday!" << std::endl;
            break; // break is mandatory where the next case is not a subset of this case.
        case 6:
            cout << "Saturday!" << std::endl;
            // the last break is optional.
        }
    }
}