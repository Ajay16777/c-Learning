#include <iostream>
#include <string>
using namespace std;

int main() {
    // Example 1: Single condition
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }

    // Example 2: Multiple conditions using &&
    int temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;
    if (temperature > 0 && temperature < 30) {
        cout << "The weather is pleasant." << endl;
    }

    // Example 3: Multiple conditions using ||
    char grade;
    cout << "Enter your grade (A/B): ";
    cin >> grade;
    if (grade == 'A' || grade == 'B') {
        cout << "You passed the exam." << endl;
    }

    // Example 4: Nested conditions
    bool isRaining;
    int umbrellaCount;
    cout << "Is it raining? (1 for Yes, 0 for No): ";
    cin >> isRaining;
    cout << "Enter the number of umbrellas you have: ";
    cin >> umbrellaCount;
    if (isRaining) {
        if (umbrellaCount > 0) {
            cout << "Take an umbrella with you." << endl;
        } else {
            cout << "You might get wet!" << endl;
        }
    }

    // Example 5: if with else
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x > 0) {
        cout << "x is positive." << endl;
    } else {
        cout << "x is non-positive." << endl;
    }

    // Example 6: if with else if
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
