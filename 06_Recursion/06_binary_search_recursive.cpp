#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if(low > high) return -1;

    int mid = (low + high)/2;
    if(arr[mid] == key) return mid;
    else if(arr[mid] > key) return binarySearch(arr, low, mid-1, key);
    else return binarySearch(arr, mid+1, high, key);
}

int main()
{
    int arr[] = {1,3,5,7,9};
    int size = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int index = binarySearch(arr, 0, size-1, key);
    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}