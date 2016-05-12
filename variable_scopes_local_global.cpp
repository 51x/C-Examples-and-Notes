#include <iostream>

//global variables
int a=2;

void showme(){
    // local variables
    int x=1, b=2;
    int n=x+b;
    std::cout << n ;
}

int main(){
    std::cout << a <<"\n";

    showme();

    return 0;
}


