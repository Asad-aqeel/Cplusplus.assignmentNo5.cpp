#include <iostream>
using namespace std;

int main()
{

    int A = 3;

    cout << "A\tA+2\tA+4\tA+6" << endl;

    for (int i = 0; i <= 5; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            cout << A + (i * 3) + (j * 2) << "\t";
        }

        cout << endl;
    }

    return 0;
}
