#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int number;
    cout << "Enter a size of pattern : ";

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int number1;

    cout << "Enter a size of pattern : ";

    cin >> number1;

    for (int i = 1; i <= number1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}