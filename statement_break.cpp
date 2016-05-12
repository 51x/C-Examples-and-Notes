#include <iostream>

int main(){

    int counting;

    for (counting = 5; counting <= 9; counting++){
        int countinside;
        for(countinside = 4; countinside <=7; countinside++){
            std::cout << countinside << "\n";
            if (countinside == 6)
                break;
        }
    }
    return 0;
}


