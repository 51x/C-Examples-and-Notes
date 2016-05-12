#include <iostream>

int main () {
  std::cout << "Message to screen." << "\n";  // The \n is for new line (and to not print % in linux temrinal).
    return 0;
}

// Common example below from the internet, but thats not a really good practice.
// If several libraries are use and one is updated, then it may cause conflicts: eg. new function added to lib2 with the same name as lib1
/*
using namespace std;

int main () {
  cout << "Message to screen.";
    return 0;
}*/
