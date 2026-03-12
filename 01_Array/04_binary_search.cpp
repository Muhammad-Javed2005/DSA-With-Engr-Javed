#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int start = 0, end = size-1;
    bool found = false;

    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid] == key)
        {
            cout << "Element found at index " << mid;
            found = true;
            break;
        }
        else if(arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    if(!found)
        cout << "Element not found";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}