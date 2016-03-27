#include <iostream>

using namespace std;

//global variables
int a=2;

void showme(){
    // local variables
    int x=1, b=2;
    int n=x+b;
    cout << n ;
}

int main(){
    cout << a <<endl;

    showme();

    return 0;
}


