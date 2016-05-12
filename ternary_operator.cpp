#include <iostream>

/*
"In computer programming, ?: is a ternary operator that is part of the syntax for a basic conditional expression in several programming languages. It is commonly referred to as the conditional operator, inline if (iif), or ternary if." ~ Wikipedia
*/

int main()
{
    int mark;
    std::cout << "Enter mark" << "\n";
    std::cin >> mark;

    /* conditional operators */
    mark >=70 ? std::cout << "pass" : std::cout << "fail" << "\n";

    return 0;
}
