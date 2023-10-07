#include <iostream>
using namespace std;

int main()
{
    cout << "ASCII Table (0-255):" << endl;

    cout << "Decimal Hex   Octal  Character" << endl;

    for (int i = 0; i <= 255; i++)
    {

        cout << dec << i << "\t" << hex << i << "\t" << oct << i << "\t";

        if (i >= 32 && i <= 126)
        {

            cout << static_cast<char>(i);
        }

        cout << endl;
    }

    return 0;
}
