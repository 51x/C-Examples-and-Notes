#include <iostream>

int main(){

    // Example 1
    int userinput;
    std::cout << "1 or 2 or 3 ?" << "\n";
    std::cin >> userinput;
    switch( userinput ){
        case 1 : {
            std::cout << "case no.1" << "\n";
            break;
        }
        case 2 : {
            std::cout << "case no.2" << "\n";
            break;
        }
        case 3 : {
            std::cout << "case no.3" << "\n";
            break;
        }
        default : {
            std::cout << "de' fault." << "\n";  // Break is not needed for default
        }
    }

    // Example 2
    char userinput2;
    std::cout << "a or b or c ?" << "\n";
    std::cin >> userinput2;
    switch( userinput2 ){
        case 'a' : {
            std::cout << "case no.1" << "\n";
            break;
        }
        case 'b' : {
            std::cout << "case no.2" << "\n";
            break;
        }
        case 'c' : {
            std::cout << "case no.3" << "\n";
            break;
        }
    }




    return 0;
}


