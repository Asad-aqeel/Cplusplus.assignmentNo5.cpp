#include <iostream>
using namespace std;
int main()
{
    int numvalues;
    int sum = 0;

    cout << "Enter the number of values to sum: ";
    cin >> numvalues;

    if (numvalues <= 0)
    {
        cout << "Invalid number of values." << endl;
        return 1;
    }

    cout << "Enter " << numvalues << " integers:" << endl;

    for (int i = 0; i < numvalues; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }

    cout << "Sum of the entered values: " << sum << endl;

    return 0;
}
