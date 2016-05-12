#include <iostream>

// Inline is giving the compiler a suggestion for possible optimization. The binary will be slightly bigger.
inline void showme(int a, int b,int c, int d);

int main()
{
    showme(4,2,3,1);
    return 0;
}

inline void showme(int a=1, int b=2, int c=3, int d=4){
    std::cout << a << "\n";

}
