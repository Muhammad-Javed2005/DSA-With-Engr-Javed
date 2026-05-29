#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>


using namespace std;

int main() {

    int number;
    cout << "Enter a size of pattern : ";
    cin >> number;
    char ch = '*';

    for (int i = 0 ; i <= number ; i++)
    {
        for (int j = 1 ; j < number - i +1; j++)
        {
            cout << "   ";
        }
        for (int k = 1 ; k <= 2*i+1; k++)
        {
            cout << setw(2) << ch ;
        }
        cout << endl; 
    }
    

    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}