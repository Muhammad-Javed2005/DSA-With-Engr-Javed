#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {12, 5, 20, 7, 15};
    int size = 5;

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > maximum)
            maximum = arr[i];
        if(arr[i] < minimum)
            minimum = arr[i];
    }

    cout << "Maximum Element: " << maximum << "\n";
    cout << "Minimum Element: " << minimum << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}