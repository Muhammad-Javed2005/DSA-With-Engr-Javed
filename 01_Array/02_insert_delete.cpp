#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    // Insert at position 2
    int pos = 2, value = 99;
    for(int i = size; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = value;
    size++;

    cout << "After Insertion: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    // Delete from position 3
    pos = 3;
    for(int i = pos; i < size-1; i++)
        arr[i] = arr[i+1];
    size--;

    cout << "\nAfter Deletion: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}