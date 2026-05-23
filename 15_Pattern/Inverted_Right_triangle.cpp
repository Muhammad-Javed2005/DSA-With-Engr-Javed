#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int number;
    cout << "Ente a size of pattern : ";
    cin >> number; 
    
    for (int i = 1; i <= number ; i++)
    {
        for (int j = 1 ; j < i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= number - i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
    

    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}