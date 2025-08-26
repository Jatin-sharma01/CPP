// NameSpace =  provides a solution for preventing name conflicts in large projects. Each entity needs a unique name.
//              A namespace allows for identically named entities as long as the namespaces are different.
// variables can have same name as long as they are in different name space

#include <iostream>
namespace first{
    std::string name = "jatin";
    int x = 1;
}
namespace second{
    std::string name = "JatinTest";
    int x = 2;
}

int main(){
// you can also type using namespace first, then you wont have to type the prefix first in x

int x = 0;
std::cout << second::name;
std::cout << first::x;

    return 0;
}