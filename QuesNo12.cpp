#include <iostream>
using namespace std;

unsigned long long calculateFactorial(int n)
{
    if (n < 0)
    {
        return 0;
    }
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;

    cout << "Enter a nonnegative integer: ";
    cin >> n;

    unsigned long long factorial = calculateFactorial(n);

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << n << " is: " << factorial << endl;
    }

    return 0;
}
