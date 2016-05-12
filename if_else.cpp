#include <iostream>

int main()
{

    int numx=2;

    if (numx <= 3)
    {
        std::cout << "lowe" << "\n";
    }

    else
    {
        std::cout << "no lowe" << "\n";
    }

    if (numx >= 3)
        std::cout << "lowe" << "\n"; // Only one line if no {} !
    else
        std::cout << "no lowe" << "\n";



    return 0;

}
