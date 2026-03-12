#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int size = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "Element not found";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}