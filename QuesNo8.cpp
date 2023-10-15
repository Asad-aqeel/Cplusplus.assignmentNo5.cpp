#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binaryNumber;
    int decimalNumber;
    int exponent = 0;
    int digit;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber > 0) {
        digit = binaryNumber % 10;
        decimalNumber += digit * pow(2, exponent);
        binaryNumber /= 10;
        exponent++;
    }

    cout << "The decimal equivalent is: " << decimalNumber <<"." << endl;

    return 0;
}
