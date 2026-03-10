#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true; // Flag to check uniqueness

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j]) // If duplicate is found
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique) // If the element has no duplicates
            return arr[i];
    }
    return -1; // Return -1 if no unique element is found
}

int main()
{
    int arr[] = {23, 45, 67, 23, 45}; // 67 is unique
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = unique(arr, size);
    
    if (result != -1)
        cout << "Unique value in the array is: " << result << endl;
    else
        cout << "No unique value found in the array" << endl;

    cout << "This program is formed by Engineer Muhammad Javed" << endl;
    
    return 0;
}
