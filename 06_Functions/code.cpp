#include <iostream>
using namespace std;

// --- Function Prototype ---
// return_type function_name(arg_type arg1, arg_type arg2, ...);
// tells compiler about the function before main()
int mult(int x, int y);  

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calling function: value returned is used directly in cout
    cout << "The product is " << mult(a, b) << endl;

    return 0;
}

// --- Function Definition ---
// matches the prototype (no semicolon here)
// 'return' sends value back to the caller
int mult(int x, int y) {
    return x * y;
}

/*
--- NOTES ---
1. Function = block of code that performs a task.
2. Prototype: tells compiler function name, return type, parameters.
3. If defined before main(), prototype is optional.
4. Functions can return values (int, float, etc.) or nothing (void).
5. Why use functions?
   - Reuse code (avoid copy-paste)
   - Easier to debug/change
   - Break complex programs into smaller parts
*/
