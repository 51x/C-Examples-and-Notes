#include <iostream>
using namespace std;

int main(){
    int number[6] = {1,4,2,8,5,7};
    cout << *number << endl;
    cout << number[1] << endl;
    cout << *(number+2) << endl;
    cout << *(number+3) << endl;
    cout << *(number+4) << endl;
    cout << *(number+5) << endl;
}

