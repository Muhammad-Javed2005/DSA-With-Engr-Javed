#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2,2,1,1,1,2,2};
    int size = 7;

    int candidate = arr[0], count = 1;

    // Boyer-Moore Majority Vote Algorithm
    for(int i = 1; i < size; i++)
    {
        if(arr[i] == candidate)
            count++;
        else
            count--;

        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
    }

    // Verify if candidate is actually majority
    count = 0;
    for(int i = 0; i < size; i++)
        if(arr[i] == candidate)
            count++;

    if(count > size / 2)
        cout << "Majority Element: " << candidate << "\n";
    else
        cout << "No Majority Element\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}