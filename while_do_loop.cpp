#include <iostream>

using namespace std;

int main()
{
    char input;

    do {
        cout << "send x for exit" <<endl;
        cin >> input;
    }while( input != 'x'); // exit if input is 'x'

    return 0;
}
