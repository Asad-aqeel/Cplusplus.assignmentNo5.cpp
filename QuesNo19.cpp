#include <iostream>
using namespace std;

int main()
{
    double Sales;
    double earnings;

    cout << "Enter sales in dollars (-1 to end): ";
    cin >> Sales;

    while (Sales != -1)
    {
        earnings = 200 + (9 * Sales);
        cout << "Salary is: $" << earnings <<"." << endl;

        cout << "Enter sales in dollars (-1 to end): ";
        cin >> Sales;
    }

    if (Sales == -1)

    {
        cout << "No outputs because you entered -1 and the program is end! " << endl;
    }

    return 0;
}
