#include <iostream>

int main(){

    // Pointer is marked as *
    // Pointers are used to point to other variables memory addresses.
    // Pointers can be reassigned.
    // "A pointer has its own memory address and size on the stack (4 bytes on x86 and 8 bytes on x64)"*

    int number1 = 999;
    int *number1pointer; // Default value, because not assigned, 0

    std::cout << number1 << " <-- number1 "<< "\n";
    std::cout << number1pointer << " <-- number1pointer (default value)" << "\n";
    std::cout << &number1pointer << " <-- Memory address of the pointer number1pointer" << "\n";
    std::cout << &number1 << " <-- Memory address of number1" << "\n" ;
    // std::cout << *number1pointer << "\n";  // Null reference, not nice
    // Security log example: segfault, denied resource overstep by requesting 4096 for RLIMIT_CORE against limit 0 ! 

    std::cout << "\n" << "----------------" << "\n" << "\n";

    number1pointer = &number1;  // Null value of number1pointer to the address of number1

    std::cout << number1 << " <-- number1 "<< "\n";  // As *number1pointer
    std::cout << number1pointer << " <-- !!!! number1pointer (now equals &number1)" << "\n";
    std::cout << &number1pointer << " <-- Memory address of the pointer number1pointer" << "\n";  // Stays at the same memory space !
    std::cout << &number1 << " <-- !!!! Memory address of number1" << "\n";
    std::cout << *number1pointer << " <-- *number1pointer" << "\n"; // As number1

    return 0;
}


// * https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in
