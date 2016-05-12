#include <iostream>

int main(){

    int countagain = 1;

    while (countagain <= 10){
        if(countagain == 3){  // 3 is going to be skipped.
            countagain++;
            continue;  //  Everything after continue is skipped and the loop finishes, continuing with the next loop.
        }
        std::cout << countagain << "\n";
        countagain++;
    }

    return 0;
}


