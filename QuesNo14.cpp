#include <iostream>
using namespace std;

int main()
{
    int value;
    int sum = 0;
    int count = 0;

    cout << "Enter a sequence of integers (end with 9999):" << endl;
    cin>>count;

    while (true)
    {
        cin >> value;

        if (value == 9999)
        {
            break;
        }

        sum += value;
        count++;
    }

    if (count > 0)
    {
        double average = static_cast<double>(sum) / count;
        cout << "The average of the entered values is: " << average << endl;
    }
    else
    {
        cout << "No values were entered." << endl;
    }

    return 0;
}
