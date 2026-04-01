#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int matrix[3][3];

    cout << "Enter 3x3 matrix elements:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> matrix[i][j];

    cout << "Matrix Elements:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}