#include <iostream>

//int stores a whole number, for ex: int age = 21;
//doube store a number with decimal points, for ex: double price = 10.99;
//char displays a single character, char should be written in single quote, for ex: char grade = 'A';
//boolean, it can only store true or false, syntax is bool,  for ex: bool student = true;
//string (object that represents a sequence of text), to delcare a string this is syntax, std::string name = "bro";

int main(){
    int x; //declaration
    x = 5; //assignment or int x =5;
    int y= 6;
    int sum = x + y;
    char grade = 'A';
    bool power = false;
    std::string name = "Bro";

    std::cout << x << '\n'; //"\n" is written to break the line
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << grade << '\n';
    std::cout << power << '\n';
    std::cout << name << '\n';



    return 0;
}