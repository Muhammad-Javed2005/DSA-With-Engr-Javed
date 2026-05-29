#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int number;
    cout << "Enter a size of pattern : ";
    cin >> number ; 

    for (int i = 0; i < number ; i++)
    {
        for (int j = 0; j < number ; j++)
        {
            cout << "* ";
        }

        cout << endl ;
    }
    

    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}