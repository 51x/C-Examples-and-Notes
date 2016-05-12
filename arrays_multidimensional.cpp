#include <iostream>

int main()
{
    // multidimensional, meaning 'two lines'
    // eg. student1 and student2
    int marks[2][6] = {
    {1,4,5,6,7,8},
    {4,1,4,4,6,5}
    };

    std::cout << marks[0][0] << "\n"; // First student, first mark
    std::cout << marks[1][2] << "\n"; // Second student, second mark

    return 0;
}
