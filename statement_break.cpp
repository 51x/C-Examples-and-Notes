#include <iostream>

using namespace std;

int main(){

    int counting;

    for (counting = 5; counting <= 9; counting++){
        int countinside;
        for(countinside = 4; countinside <=7; countinside++){
            cout << countinside << endl;
            if (countinside == 6)
                break;
        }
    }
    return 0;
}


