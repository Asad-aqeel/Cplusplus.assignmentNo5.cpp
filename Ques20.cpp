#include <iostream>
using namespace std;

int main()
{
    int hoursWorked;
    double hourlyRate;
    double grossPay;

    cout << "Enter # of hours worked: ";
    cin >> hoursWorked;

    while (hoursWorked != -1)
    {
        cout << "Enter hourly rate of the worker: ";
        cin >> hourlyRate;

        if (hoursWorked <= 40)
        {
            grossPay = hoursWorked * hourlyRate;
        }

        else
        {
            grossPay = 40 * hourlyRate + (hoursWorked - 40) * 1.5 * hourlyRate;
        }

        cout << "Salary is $" << grossPay <<"." << endl;

        cout << "Enter # of hours worked: ";
        cin >> hoursWorked;
    }

    return 0;
}
