#include <iostream>
using namespace std;

int main() {
    // Example 1: 1D array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "1D Array Example:" << endl;
    cout << "Elements of the array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Example 2: 2D array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "\n2D Array Example:" << endl;
    cout << "Elements of the matrix:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Example 3: String formation in array
    string names[3] = {"Alice", "Bob", "Charlie"};
    cout << "\nString Array Example:" << endl;
    cout << "Names: ";
    for (int i = 0; i < 3; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Example 4: Updating string in array
    cout << "\nUpdate String in Array Example:" << endl;
    names[1] = "David";
    cout << "Updated names: ";
    for (int i = 0; i < 3; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
