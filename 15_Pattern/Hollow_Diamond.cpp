#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int number;
    cout << "Enter a size of pattern : ";
    cin >> number;

    for (int  i = 1 ; i <= number ; i++)
    {
        for (int j = 1; j <= number - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = number - 1; i >= 1; i--)
    {
        for (int j = 1; j <= number - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}

