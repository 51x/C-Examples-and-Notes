#include <iostream>

int main(){
    int number[6] = {1,4,2,8,5,7};
    std::cout << *number << "\n";
    std::cout << number[1] << "\n";
    std::cout << *(number+2) << "\n";
    std::cout << *(number+3) << "\n";
    std::cout << *(number+4) << "\n";
    std::cout << *(number+5) << "\n";
}

