#include <iostream>

int main()
{
    int mark[6] = {5,6,7,8,9,10};  /*Must be the number specified*/
    std::cout << mark[2];

    mark[3]=999;
    std::cout << mark[3];

    return 0;
}
