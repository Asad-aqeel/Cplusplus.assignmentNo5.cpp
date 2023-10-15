#include <iostream>
using namespace std;

int main()
{
    int accountNumber;
    double beginningBalance;
    double totalCharges;
    double totalCredits;
    double creditLimit;
    double newBalance;

    cout << "Enter account number (-1 to end): ";
    cin >> accountNumber;

    while (accountNumber != -1)
    {
        cout << "Enter beginning balance: ";
        cin >> beginningBalance;

        cout << "Enter total charges: ";
        cin >> totalCharges;

        cout << "Enter total credits: ";
        cin >> totalCredits;

        cout << "Enter credit limit: ";
        cin >> creditLimit;

        newBalance = beginningBalance + totalCharges - totalCredits;

        cout << "Account: " << accountNumber << endl;
        cout << "Credit limit: " << creditLimit << endl;
        cout << "Balance: " << newBalance << endl;

        if (newBalance > creditLimit)
        {
            cout << "Credit Limit Exceeded." << endl;
        }

        else
        {
            cout << "Credit Limit Not Exceeded." << endl;
        }

        cout << "Enter account number (-1 to end): ";
        cin >> accountNumber;
    }

    return 0;
}
