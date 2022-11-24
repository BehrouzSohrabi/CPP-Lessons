#include <iostream> // include directive is used when a library is needed to be imported.
                    // built-in libraries has no extension whereas other libraries has usually .h extension.

using namespace std; // to use the whole std namespace
using std::printf; // or just picking printf method from std. :: is the scope operator

int main() {

   std::printf ("print %d here\n", 1); // if we didn't use 'using' keywords to access the namespace or a specific item from it
   printf ("Characters:\t%c %c \n", 'a', 65); // %c character or ASCI code decimal equivalent
   printf ("Percentage:\t%d%%\n", 50); // %% to escape %, \t tab
   printf ("Decimals:\t%d %ld\n", 1977, 650000L); // Decimal
   printf ("Preceding with blanks: %10d \n", 1977); // Preceding 10 spaces
   printf ("Preceding with zeros: %010d \n", 1977); // Preceding 10 zeros
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("Width trick: %*d \n", 20, 10);
   printf ("%s \n", "A string");

}