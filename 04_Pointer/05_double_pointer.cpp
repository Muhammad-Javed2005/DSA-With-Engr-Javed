#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p; // double pointer

    cout << "Value of a: " << a << "\n";
    cout << "Value via pointer *p: " << *p << "\n";
    cout << "Value via double pointer **pp: " << **pp << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}