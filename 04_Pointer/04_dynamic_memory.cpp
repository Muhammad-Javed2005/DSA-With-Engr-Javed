#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n]; // dynamic memory allocation

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array Elements: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr; // free memory

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}