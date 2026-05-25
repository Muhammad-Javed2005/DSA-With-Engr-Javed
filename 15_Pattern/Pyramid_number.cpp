#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    int number;
    cout << "Enter a size of pattern : ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number - i; j++)
        {
            cout << "   ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << setw(2) << k << " ";
        }
        for (int l = i - 1; l >= 1; l--)
        {
            cout << setw(2) << l << " ";
        }
        cout << endl;
    }

    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}