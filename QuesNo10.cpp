#include <iostream>
using namespace std;

int countSevens(int number)
{
    int count = 0;

    while (number != 0)
    {
        int digit = number % 10;
        if (digit == 7)
        {
            count++;
        }
        number /= 10;
    }

    return count;
}

int main()
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    int count = countSevens(number);

    cout << "The number of 7s in the integer is: " << count <<"." << endl;

    return 0;
}
