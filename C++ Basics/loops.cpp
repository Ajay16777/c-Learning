#include <iostream>
using namespace std;

int main() {
    // Example 1: for loop
    cout << "For Loop Example:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Example 2: while loop
    cout << "\nWhile Loop Example:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        ++j;
    }
    cout << endl;

    // Example 3: do-while loop
    cout << "\nDo-While Loop Example:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        ++k;
    } while (k <= 5);
    cout << endl;

    // Explanation of the differences between for, while, and do-while loops
    // - for loop: Used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and update.
    //             The loop executes as long as the condition is true.
    // - while loop: Used when the number of iterations is not known beforehand, and the loop continues as long as the condition is true.
    // - do-while loop: Similar to the while loop, but the condition is checked after executing the loop body.
    //                   This ensures that the loop body is executed at least once, even if the condition is initially false.

    return 0;
}
