#include <iostream>

int main()
{
    char input;

    do {
        std::cout << "send x for exit" <<"\n";
        std::cin >> input;
    }while( input != 'x'); // exit if input is 'x'

    return 0;
}
