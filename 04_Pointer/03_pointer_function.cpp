#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// Function to swap two numbers using pointers
void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Before Swap: a = " << a << ", b = " << b << "\n";
    swapPointer(&a, &b);
    cout << "After Swap: a = " << a << ", b = " << b << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}