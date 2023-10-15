#include <iostream>
using namespace std;

int main()
{

    int A = 3;
    int sum;

    cout << "A\tA+2\tA+4\tA+6" << endl;

    for (int i = 1; i <= 5; i++)
    {
        sum = A * i;
        for (int j = 0; j < 1; j++)
        {

            cout << sum << "\t" << sum + 2 << "\t" << sum + 4 << "\t" << sum + 6 << "\t";
        }

        cout << endl;
    }

    return 0;
}
