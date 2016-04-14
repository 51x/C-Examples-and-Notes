#include <iostream>
using namespace std;

/* Incorrect, making segfault and RLIMIT_CORE against limit 0 
int main(){

    int *pointer;

    cout << "Pointer value is: " << *pointer ;

    *pointer = 1; // Null address set to 1 - not good.

    if (pointer != NULL) {
        cout << *pointer << " - Pointer, oops...";
    }

    return 0;
}
*/

// Good example
// Pointer's value should be correct memory address, non-zero
int main(){

    int a = 11;
    int *pointer;
    pointer = &a;

    cout << "Pointer value is: " << *pointer ;

    if (pointer != NULL) {
        cout << " - Pointer ok.";
    }
    return 0;
}
