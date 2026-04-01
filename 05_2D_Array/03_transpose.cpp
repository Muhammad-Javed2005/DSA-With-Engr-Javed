#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int transpose[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            transpose[j][i] = matrix[i][j];

    cout << "Transpose of Matrix:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << transpose[i][j] << " ";
        cout << "\n";
    }

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}