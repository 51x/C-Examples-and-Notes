#include <iostream>

using namespace std;


/* Incorrect, making segfault and RLIMIT_CORE against limit 0 
int main(){

    int *pointer;

    cout << "Pointer value is: " << *pointer ;

    *pointer = 1;

    if (pointer != NULL) {
        cout << *pointer << " - Pointer ok.";
    }

    return 0;
}
*/


// Not sure about this part yet //
int main(){

    int a = 11;
    int *pointer;
    pointer = &a;

    cout << "Pointer value is: " << *pointer ;

    if (pointer != NULL) {
        cout << " - Pointer ok.";
    }
    return 0;
}
