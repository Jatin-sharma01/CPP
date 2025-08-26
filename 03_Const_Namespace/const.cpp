// the const keyword specified that a variable's value is constant
//tells the compiler to prevent anything from modifying it
//(read only)


#include <iostream>

int main(){

    const double PI = 3.14159;
   const double radius = 10;
   const double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;
}