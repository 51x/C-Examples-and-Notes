#include <iostream>

using namespace std;

void showme(int a, int b,int c, int d);

int main(){
    showme(1,2,3,4);
    return 0;
}

void showme(int a=1, int b=2, int c=3, int d=4){
    cout << a << endl;

}
