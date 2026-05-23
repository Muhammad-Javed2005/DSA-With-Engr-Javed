#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    int number; 
    cout << "Enter a size of pattern : ";
    cin >> number;

    int a = 1; 

    for (int i = 1; i <=  number ; i++)
    {
        for (int j = 1; j <= i;  j++)
        {
            cout << setw(2) << a <<  " "; 
            a++;
        }
        cout << endl;
    }
    

    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}

