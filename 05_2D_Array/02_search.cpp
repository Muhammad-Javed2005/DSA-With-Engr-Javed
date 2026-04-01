#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int key;
    bool found = false;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(matrix[i][j] == key)
            {
                cout << "Element found at position (" << i << "," << j << ")\n";
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        cout << "Element not found\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}