#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int first = arr[0];
    for(int i = 0; i < size-1; i++)
        arr[i] = arr[i+1];
    arr[size-1] = first;

    cout << "Rotated Array: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}