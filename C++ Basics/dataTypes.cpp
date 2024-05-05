#include <iostream>
#include <string>
using namespace std;

int main() {
    // Numeric Data Types
    // Integer types
    // int: Stores whole numbers, typically 4 bytes in size
    // Range: -2,147,483,648 to 2,147,483,647
    // Range: -2 * 10^31 to 2 * 10^31 - 1
    int integer = 2147483647;
    cout << "Integer example: " << integer << endl;

    // short: Short integer, typically 2 bytes in size
    // Range: -32,768 to 32,767
    // Range: -3 * 10^3 to 3 * 10^3 - 1
    short shortInteger = 32767;
    cout << "Short integer example: " << shortInteger << endl;

    // long: Long integer, typically 4 bytes in size
    // Range: -2,147,483,648 to 2,147,483,647
    // Range: -9 * 10^18 to 9 * 10^18 - 1
    long longInteger = 2147483647;
    cout << "Long integer example: " << longInteger << endl;


    // long long: Longer integer, typically 8 bytes in size
    // Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    // Range: -9 * 10^18 to 9 * 10^18 - 1
    long long veryLongInteger = 9223372036854775807;
    cout << "Very long integer example: " << veryLongInteger << endl;

    // Floating-point types
    // float: Single-precision floating-point, typically 4 bytes in size
    // Range: +/-3.4e +/- 38 (~7 digits)
    // Range: +/- 3 * 10^38
    float floatingPoint = 3.14e38f;
    cout << "Floating point example: " << floatingPoint << endl;

    // double: Double-precision floating-point, typically 8 bytes in size
    // Range: +/-1.7e +/- 308 (~15 digits)
    // Range: +/- 1.7 * 10^308
    double doublePrecision = 1.7e308;
    cout << "Double precision example: " << doublePrecision << endl;

    // long double: Extended-precision floating-point, typically 10 bytes in size
    // Range: +/-1.1e +/- 4932 (~19 digits)
    // Range: +/- 1.1 * 10^4932
    long double extendedPrecision = 1.1e4932l;
    cout << "Extended precision example: " << extendedPrecision << endl;

    // Character types
    // char: Single character, typically 1 byte in size
    // Range: -128 to 127 or 0 to 255 (unsigned)
    char character = 'A';
    cout << "Character example: " << character << endl;

    // String type
    // string: Sequence of characters
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "String example: " << str << endl;

    // Boolean type
    // bool: Represents true or false
    bool boolean = true;
    cout << "Boolean example: " << boolean << endl;



    return 0;
}
