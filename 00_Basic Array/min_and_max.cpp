#include <iostream>

#include <string>

using namespace std;

int minimum(int arr[], int size)
{
    int smallest = INT8_MAX;

    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
    }
    return smallest;
}

int maximum(int arr[], int size)
{
    int largest = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        largest = max(arr[i], largest);
    }
    return largest;
}

int main()
{

    int arr[] = {2, 67, 86, 34, 76, 456, 67, 43, 5};
    int size = 9;

    cout << "The maximum value of array is " << maximum(arr, size) << "." << endl;
    cout << "The minimum value of array is " << minimum(arr, size) << "." << endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}