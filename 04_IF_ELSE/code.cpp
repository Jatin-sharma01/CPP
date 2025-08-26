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


/*
📌 IF–ELSE NOTES (C++)

1️⃣ Basic Structure:
   if (condition) {
       // runs if condition is true
   } else {
       // runs if condition is false
   }

2️⃣ Else-If Ladder:
   if (condition1) {
       // runs if condition1 is true
   } else if (condition2) {
       // runs if condition2 is true
   } else {
       // runs if none of the above are true
   }

3️⃣ Nested If:
   if (outer_condition) {
       if (inner_condition) {
           // runs if both are true
       }
   }

4️⃣ Conditions:
   ==   Equal to
   !=   Not equal to
   >    Greater than
   <    Less than
   >=   Greater or equal
   <=   Less or equal
   &&   Logical AND
   ||   Logical OR
   !    Logical NOT

5️⃣ Tips:
   - Order matters in if-else chains (first true condition executes).
   - Use parentheses for clarity in complex conditions.
   - For mutually exclusive ranges, use else-if instead of separate ifs.
*/
