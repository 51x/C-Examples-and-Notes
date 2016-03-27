#include <iostream>

using namespace std;

int main(){

    // Example 1
    int userinput;
    cout << "1 or 2 or 3 ?" << endl;
    cin >> userinput;
    switch( userinput ){
        case 1 : {
            cout << "case no.1" << endl;
            break;
        }
        case 2 : {
            cout << "case no.2" << endl;
            break;
        }
        case 3 : {
            cout << "case no.3" << endl;
            break;
        }
        default : {
            cout << "de' fault." << endl;  // Break is not needed for default
        }
    }

    // Example 2
    char userinput2;
    cout << "a or b or c ?" << endl;
    cin >> userinput2;
    switch( userinput2 ){
        case 'a' : {
            cout << "case no.1" << endl;
            break;
        }
        case 'b' : {
            cout << "case no.2" << endl;
            break;
        }
        case 'c' : {
            cout << "case no.3" << endl;
            break;
        }
    }




    return 0;
}


