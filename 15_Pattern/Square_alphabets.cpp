#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int number;
    cout << "Enter a size of pattern : ";
    cin >> number;

    char ch = 'A';

    for (int i = 0; i < number ; i++)
    {
        char ch = 'A';

        for (int j = 0; j < number ; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl ;
    }
    

    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}