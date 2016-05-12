#include <iostream>

void notmain();

int main(){ // Already a function returning int 0!
    notmain();
    notmain();
    return 0;
}

/* Must be before main or specified like above! */
void notmain(){
    std::cout << "say hai to functions"<<"\n";
}
