#include <iostream>
using namespace std;

int main()
{

    cout << "N\tN*10\tN*100\tN*1000" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " \t " << i * 10 << " \t " << i * 100 << " \t " << i * 1000 << endl;
    }

    return 0;
}
