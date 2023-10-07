#include <iostream>
using namespace std;

int main()
{
    int sum = 1;

    for (int i = 1; i <= 100; i++)
    {

        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    cout << "The sum of the first 100 odd integers is:" << sum << endl;

    return 0;
}
