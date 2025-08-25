#include <iostream>
using namespace std;

int main(){
    
    int age; // Need a variable...
    cout << "Please enter your age: "; // Asks for age
    cin >> age; // The input is put in age
    cin.ignore();   // Throw away enter
    if(age < 16){
        cout << "You are not eligible for driving license" << "\n";

    }
    else if( age > 17){
        cout << "You can apply for driving license" << "\n";

    }
    else if (age < 18 && age > 15)      
    {
        cout << "You can apply for Learning Driving license" << "\n";
    }
    cin.get(); //if you press the enter window will close
return 0;
}