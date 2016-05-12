#include <iostream>

int main(){
    int *pointer;
    pointer = new int; // Allocate memory
    *pointer = 9;
    std::cout << *pointer << "\n";
    delete pointer;  // Free up memory - deallocate
    std::cout << sizeof(pointer) << "\n"; // Size of pointer!
}
