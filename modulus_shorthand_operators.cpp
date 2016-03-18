#include <iostream>

using namespace std;

int main()
{

    /* modulus is the remainder */

    int numx = 9, numy = 4;

    cout << numx % numy << endl;

    numx += numy; // same as  numx = numx + numy;
    cout << numx << endl;

    numx %= numy;
    cout << numx << endl;

    numx *= numy;
    cout << numx << endl;

    numx /= numy;
    cout << numx << endl;




    return 0;

}
