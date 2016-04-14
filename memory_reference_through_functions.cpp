#include <iostream>
using namespace std;

void show(int *pointer);

int main(){
    int number = 9;
    show(&number);  // Pass the memory address of number to show function, then print out the content using *pointer
    cout << number << " <-- from main, but value changed in show function" << endl;
    return 0;
}

void show(int *pointer){
    cout << pointer << " <-- address we are pointing to with pointer" << endl;
    cout << *pointer << " <-- from show function, using the *pointer which instructs to print content of number" << endl;
    *pointer = 6;
}
