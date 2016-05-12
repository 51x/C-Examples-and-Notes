#include <iostream>

/* Incorrect, making segfault and RLIMIT_CORE against limit 0 
int main(){

    int *pointer;

    std::cout << "Pointer value is: " << *pointer ;

    *pointer = 1; // Null address set to 1 - not good.

    if (pointer != NULL) {
        std::cout << *pointer << " - Pointer, oops...";
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

    std::cout << "Pointer value is: " << *pointer << "\n";

    if (pointer != NULL) {
        std::cout << " - Pointer ok." << "\n";
    }
    return 0;
}
