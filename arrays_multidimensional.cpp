#include <iostream>

using namespace std;

int main()
{
    // multidimensional, meaning 'two lines'
    // eg. student1 and student2
    int marks[2][6] = {
    {1,4,5,6,7,8},
    {4,1,4,4,6,5}
    };

    cout << marks[0][0] << endl; // First student, first mark
    cout << marks[1][1] << endl; // Second student, second mark


    return 0;
}
