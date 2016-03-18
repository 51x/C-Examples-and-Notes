#include <iostream>

using namespace std;

void notmain();

int main(){ // Already a function returning int 0!
    notmain();
    notmain();
    return 0;
}

/* Must be before main or specified like above! */
void notmain(){
    cout << "welcum to functions"<<endl;
}
