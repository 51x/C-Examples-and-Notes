#include <iostream>

struct thestruct{
    // Members of structure is id and sex.
    int id;
    char sex;
}alice,mary;

int main(){
    thestruct joe,andersen = {369,'m'}; // struct inside function

    alice.id = 65;
    mary.id = 67;
    joe.id = 76;

    alice.sex = 'm';
    mary.sex = 'f';
    joe.sex = 'm';

    std::cout << alice.id << "\n" << mary.sex << "\n";

    return 0;

}


