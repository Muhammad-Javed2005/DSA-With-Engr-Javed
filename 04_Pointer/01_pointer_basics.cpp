#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Value of a: " << a << "\n";
    cout << "Address of a: " << &a << "\n";
    cout << "Pointer p points to address: " << p << "\n";
    cout << "Value at pointer p: " << *p << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}
