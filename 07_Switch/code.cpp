#include <iostream>
using namespace std;

// --- Functions (return type = void because they just "do something", not return a value) ---
void playgame() {
    cout << "Play game called";
}
void loadgame() {
    cout << "Load game called";
}
void playmultiplayer() {
    cout << "Play multiplayer game called";
}

int main() {
    int input;

    // --- Menu ---
    cout << "1. Play game\n";
    cout << "2. Load game\n";
    cout << "3. Play multiplayer\n";
    cout << "4. Exit\n";
    cout << "Selection: ";
    cin >> input;

    // --- SWITCH STATEMENT NOTES ---
    // switch is used when you want to compare ONE variable with multiple constant values
    // Each "case" checks if 'input' == some constant.
    // After executing a case, 'break' prevents "fall-through" into the next case.
    // 'default' works like the "else" in if-else: it runs if no case matches.

    switch (input) {
        case 1:   // if input == 1
            playgame();
            break;   // exit switch after executing this case

        case 2:   // if input == 2
            loadgame();
            break;

        case 3:   // if input == 3
            playmultiplayer();
            break;

        case 4:   // if input == 4
            cout << "Thank you for playing!\n";
            break;

        default:  // if input doesn't match any case
            cout << "Error, bad input, quitting\n";
            break;
    }

    cin.get(); // waits for Enter before closing (after input)
}
