#include <iostream>
 
using namespace std; // So the program can see cout and endl
 
int main()
{
  // The loop goes while x < 10, and x increases by one every loop
  for ( int x = 0; x < 10; x++ ) {
    // Keep in mind that the loop condition checks 
    //  the conditional statement before it loops again.
    //  consequently, when x equals 10 the loop breaks.
    // x is updated before the condition is checked.    
    cout<< x <<endl;
  }
  cin.get();
}


/*
https://www.cprogramming.com/tutorial/lesson3.html

Loops are used to repeat a block of code. Being able to have your program repeatedly execute a block of code is one of the most basic but useful tasks in programming -- many programs or websites that produce extremely complex output (such as a message board) are really only executing a single task many times. (They may be executing a small number of tasks, but in principle, to produce a list of messages only requires repeating the operation of reading in some data and displaying it.) Now, think about what this means: a loop lets you write a very simple statement to produce a significantly greater result simply by repetition.


One Caveat: before going further, you should understand the concept of C++'s true and false, because it will be necessary when working with loops (the conditions are the same as with if statements). There are three types of loops: for, while, and do..while. Each of them has their specific uses. They are all outlined below.

*/

/*
📌 C++ LOOPS NOTES

🔹 FOR LOOP
Syntax:
    for (initialization; condition; update) {
        // code
    }

- Runs while condition is true
- Initialization → executes once at start
- Update → runs after each iteration
- Condition is checked before each loop

Example:
    for (int x = 0; x < 10; x++) {
        cout << x << endl;
    }

--------------------------------------------------

🔹 WHILE LOOP
Syntax:
    while (condition) {
        // code
    }

- Condition is checked before each iteration
- Executes block only if condition is true
- Works like a for loop without init & update

Example:
    int x = 0;
    while (x < 10) {
        cout << x << endl;
        x++;
    }

--------------------------------------------------

🔹 DO...WHILE LOOP
Syntax:
    do {
        // code
    } while (condition);

- Block runs at least once (even if condition false)
- Condition is checked at the end
- Must end with a semicolon `;`

Example:
    int x = 0;
    do {
        cout << "Hello, world!" << endl;
    } while (x != 0);

--------------------------------------------------

📌 Key Points:
- FOR → best when number of iterations is known
- WHILE → best when looping until a condition changes
- DO...WHILE → best when loop must run at least once
- Loop condition must eventually become false, or it runs forever
*/
