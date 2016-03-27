#include <iostream>

using namespace std;

int main(){

    // Refer to memory address of operator with &
    // & is a reference and cannot be reassigned.
    // & must be assigned at initialization.

    int number1 = 1 , number2 = 2 , number3 = 3 , number4 = 4;

    cout << number1 << " is at the address: " << &number1 << endl;
    cout << number2 << " is at the address: " << &number2 << endl;
    cout << number3 << " is at the address: " << &number3 << endl;
    cout << number4 << " is at the address: " << &number4 << endl;

    // Also it can be followed that the values increase after each other.

    return 0;
}


