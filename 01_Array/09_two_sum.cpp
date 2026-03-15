#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int size = 4;
    int target = 9;

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout << "Pair found at index " << i << " and " << j;
            }
        }
    }

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}