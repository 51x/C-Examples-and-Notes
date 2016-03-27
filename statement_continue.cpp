#include <iostream>

using namespace std;

int main(){

    int countagain = 1;

    while (countagain <= 10){
        if(countagain == 3){  // 3 is going to be skipped.
            countagain++;
            continue;  //  Everything after continue is skipped and the loop finishes, continuing with the next loop.
        }
        cout << countagain;
        countagain++;
    }

    return 0;
}


