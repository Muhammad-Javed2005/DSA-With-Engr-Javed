#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int prefix[5];

    prefix[0] = arr[0];
    for(int i = 1; i < size; i++)
        prefix[i] = prefix[i-1] + arr[i];

    cout << "Prefix Sum Array: ";
    for(int i = 0; i < size; i++)
        cout << prefix[i] << " ";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}