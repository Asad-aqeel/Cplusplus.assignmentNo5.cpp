#include <iostream>
using namespace std;

int main()
{
    double totalGallons;
    double totalMiles;
    double gallons;
    double miles;
    double mpg;
    double overallMpg;

    cout << "Enter the gallons used (-1 to end): ";

    cin >> gallons;

    while (gallons != -1)
    {
        cout << "Enter the miles driven: ";
        cin >> miles;

         mpg = miles / gallons;
        cout << "The miles / gallon for this tank was " << mpg << endl;

        totalMiles += miles;
        totalGallons += gallons;

        cout << "Enter the gallons used (-1 to end): ";
        cin >> gallons;
    }

    if (gallons != 0)
    {
         overallMpg = totalMiles / totalGallons;
        cout << "The overall average miles/gallon was " << overallMpg << endl;
    }

    else
    {
        cout << "No data entered." << endl;
    }

    return 0;
}
