#include <iostream>

using namespace std;

int main(){

    // Pointer is marked as *
    // Pointers are used to point to other variables memory addresses.
    // Pointers can be reassigned.
    // "A pointer has its own memory address and size on the stack (4 bytes on x86)."*

    int number1 = 999;

    int *number1pointer;

    cout << number1 << endl;
    cout << number1pointer << endl;  // Default value
    cout << &number1pointer << endl;  // Address
    cout << &number1 << endl;
    cout << *number1pointer << endl;

    cout << endl << "----------------" << endl << endl;

    number1pointer = &number1;  // Value of number1pointer as the address of number1

    cout << number1 << endl;  // As *number1pointer
    cout << number1pointer << "  !!!!" << endl;
    cout << &number1pointer << endl;
    cout << &number1 << "  !!!!" << endl;
    cout << *number1pointer << endl; // As number1

    return 0;
}


// * https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in
