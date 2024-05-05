#include <iostream>
using namespace std;

int main() {
    // Example 1: Switch statement
    char choice;
    cout << "Choose a fruit (a for apple, b for banana, o for orange): ";
    cin >> choice;
    switch (choice) {
        case 'a':
            cout << "You chose apple." << endl;
            break; // Without a break, execution would continue to the next case regardless of whether its condition is true
        case 'b':
            cout << "You chose banana." << endl;
            break;
        case 'o':
            cout << "You chose orange." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    // Example 2: Switch statement with fall-through
    int day;
    cout << "Enter a number (1-7) representing a day of the week: ";
    cin >> day;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            // Note: No break, so it falls through to the next case
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day." << endl;
    }

    // Example 3: Explanation of break statement in switch
    // In a switch statement, the break statement is used to exit the switch block.
    // It prevents "fall-through", where execution continues to the next case without a break.
    // Without a break, execution would continue to the next case regardless of whether its condition is true.
    // This behavior is useful when multiple cases should execute the same block of code.
    // However, if fall-through is not desired, a break statement must be used to exit the switch block after each case.

    return 0;
}
