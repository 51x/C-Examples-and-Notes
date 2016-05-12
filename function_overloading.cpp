#include <iostream>
#include <string>

/* I don't think it's a good idea to use the same names.. it can easily go confusing */

void show();
void show(std::string);

int main()
{
    show();
    show("and more");
    return 0;
}

void show(){
    std::cout << "text message" << "\n";
}

void show(std::string more){
    std::cout << "text message " << more << "\n";
}

