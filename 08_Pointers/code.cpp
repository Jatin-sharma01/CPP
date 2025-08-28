#include <iostream>
using namespace std;

int main() {
    // ---------------------------
    // 1. NORMAL VARIABLE
    // ---------------------------
    int x = 42;  // a normal integer variable
    cout << "x = " << x << endl;    // prints the value (42)

    // ---------------------------
    // 2. POINTER VARIABLE
    // ---------------------------
    int* p = &x;  // "p is a pointer to int" and it stores the address of x
    cout << "Address of x (&x) = " << &x << endl;   // address of x in memory
    cout << "Value of p (which is address of x) = " << p << endl;

    // ---------------------------
    // 3. DEREFERENCING
    // ---------------------------
    cout << "Value at the address stored in p (*p) = " << *p << endl;
    // *p means "go to the address in p and fetch the value" (same as x)

    // ---------------------------
    // 4. MODIFYING THROUGH POINTER
    // ---------------------------
    *p = 100;  // changes the value at address stored in p
    cout << "After *p = 100;" << endl;
    cout << "x = " << x << " (x also changes!)" << endl;
    cout << "*p = " << *p << endl;

    // ---------------------------
    // 5. NULL POINTER (safe initialization)
    // ---------------------------
    int* np = nullptr;   // np points to "nothing"
    if (np == nullptr) {
        cout << "np is a null pointer, it points to nothing." << endl;
    }

    // ---------------------------
    // 6. POINTER AND ARRAYS
    // ---------------------------
    int arr[3] = {10, 20, 30};
    int* pa = arr;  // array name "arr" is like &arr[0]

    cout << "arr[0] = " << arr[0] << endl;     // normal way
    cout << "*pa = " << *pa << " (first element)" << endl;
    cout << "*(pa+1) = " << *(pa+1) << " (second element)" << endl;
    cout << "pa[2] = " << pa[2] << " (third element)" << endl;

    // ---------------------------
    // 7. POINTER TO POINTER
    // ---------------------------
    int* pp = &x;      // pointer to x
    int** ppp = &pp;   // pointer to pointer (stores address of pp)
    cout << "pp = " << pp << " (address of x)" << endl;
    cout << "*pp = " << *pp << " (value of x)" << endl;
    cout << "ppp = " << ppp << " (address of pp)" << endl;
    cout << "*ppp = " << *ppp << " (pp, which is address of x)" << endl;
    cout << "**ppp = " << **ppp << " (value of x)" << endl;

    return 0;
}
