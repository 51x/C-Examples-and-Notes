#include <iostream>
using namespace std;

int main(){
    int *pointer;
    pointer = new int; // Allocate memory
    *pointer = 9;
    cout << *pointer << endl;
    delete pointer;  // Free up memory - deallocate
    cout << sizeof(pointer) << endl; // Size of pointer!
}
