#include <iostream>
using namespace std;

int main()
{

    int sum = 2;

    for (int i = 2; i <= 20; i++)
    {

        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << "The sum of even integers from 1 to 20 is:" << sum <<"." << endl;

    return 0;
}
