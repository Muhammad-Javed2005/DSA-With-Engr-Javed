#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1,2,3,7,5};
    int size = 5;
    int target = 12;

    bool found = false;

    for(int i = 0; i < size; i++)
    {
        int sum = 0;
        for(int j = i; j < size; j++)
        {
            sum += arr[j];
            if(sum == target)
            {
                cout << "Subarray with given sum found from index "
                     << i << " to " << j << "\n";
                found = true;
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        cout << "No subarray with given sum found\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}