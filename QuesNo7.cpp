#include <iostream>
using namespace std;

int main()
{
    int number;
    int originalNumber;
    int reverseNumber = 0;

    cout << "Enter a five-digit integer: ";
    cin >> number;

    originalNumber = number;

    if (number >= 10000 && number <= 99999)
    {
        while (number > 0)
        {
            int digit = number % 10;
            reverseNumber = reverseNumber * 10 + digit;
            number /= 10;
        }

        if (originalNumber == reverseNumber)
        {
            cout << "The number is a palindrome." << endl;
        }
        else
        {
            cout << "The number is not a palindrome." << endl;
        }
    }
    else
    {
        cout << "Invalid input. Please enter a five-digit integer." << endl;
    }

    return 0;
}
