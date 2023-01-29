#include <iostream>
using std::string;
using std::cout;


// main subroutine
int main () {

    // Primitive Data Types:
    // int
    int i {-1}; // regular integer values.
    // sign and unsigned numbers
    signed int j {-1}; // int by nature is signed. we can explicitly use signed just to be sure.
    unsigned int j1 = -2; // it's unsigned, so it will show -2 as 4294967294 or some big integer (depending on the processor architecture's int size).
                          // also we can't assign value to j with safe initialization {-2} since it's not allowed.
    unsigned short     j2 = -1; // 2 bytes. short integer.
    unsigned int       j3 = -1; // 4 bytes. regular integer.
    unsigned long      j4 = -1; // 4 bytes. why bother?
    unsigned long long j5 = -1; // 8 bytes. 0 to 18,446,744,073,709,551,615.

    float  k {-2.5}; // 4 bytes. min: 1.17549e-038 max: 3.40282e+038. It doesn't take unsigned since it follows IEEE 754 standard.
    double l {-9.1}; // 8 bytes. min: 2.22507e-308 max: 1.79769e+308
    long double L {-1.3e-10}; // 16 bytes. min: 2.22507e-308 max: 1.79769e+308. Very memory expensive!

    bool  m {true};
    char  n {'Z'};
    string s = "Hello"; // don't forget to import std::string since it's not a built-in data type (yet).

    // Compound Data Types:
    // array
    int a[] {}; // an empty array of integers.

    // struct. can store multiple variables with different datatypes and be a data type by itself.
    struct be_a_person {
        std::string name;
        int age;
        float happiness;
    } she; // instantiate a variable named 'she'. can do more with , like: } she, he, me, you;
    be_a_person he;
    she.name = "Amy";
    he.name = "Zach";
    cout << "Access struct's children (members) with . " << she.name << " & " << he.name << std::endl;

    // class. very much based on struct, with more functionality.
    class task {
        int times {0};
        public:
            int get_times() const;
            void do_task(int times = 1);
    };

    // union. a container of overlapping objects
    // member share the same memory
    // unlike struct members get the same value
    union x {
        int a;
        int b;
    };

    // enum. enumerate a set of values with names
    enum season { spring, summer, autumn, winter };
    season now;
    now = winter;
    cout << "season index of winter: " << now;
}