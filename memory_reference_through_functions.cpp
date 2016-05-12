#include <iostream>

void show(int *pointer);

int main(){
    int number = 9;
    show(&number);  // Pass the memory address of number to show function, then print out the content using *pointer
    std::cout << number << " <-- from main, but value changed in show function" << "\n";
    return 0;
}

void show(int *pointer){
    std::cout << pointer << " <-- address we are pointing to with pointer" << "\n";
    std::cout << *pointer << " <-- from show function, using the *pointer which instructs to print content of number" << "\n";
    *pointer = 6;
}
