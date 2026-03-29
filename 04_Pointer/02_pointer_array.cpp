#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // pointer to first element
    int size = 5;
    
    cout << "Array Elements using Pointer: ";
    for(int i = 0; i < size; i++)
        cout << *(p + i) << " ";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}