#include <iostream>
#include <cmath>
using namespace std;

// They all are armstrong 407 371 370....

int main()
{
    int number, originalNumber, remainder, result = 0;
    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, 3);
        originalNumber /= 10;
    }

    if (result == number)
    {
        cout << number << " is an Armstrong number." << endl;
    }
    else
    {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
