#include <iostream>

int main()
{

    /* modulus is the remainder */

    int numx = 9, numy = 4;

    std::cout << numx % numy << "\n";

    numx += numy; // same as  numx = numx + numy;
    std::cout << numx << "\n";

    numx %= numy;
    std::cout << numx << "\n";

    numx *= numy;
    std::cout << numx << "\n";

    numx /= numy;
    std::cout << numx << "\n";




    return 0;

}
