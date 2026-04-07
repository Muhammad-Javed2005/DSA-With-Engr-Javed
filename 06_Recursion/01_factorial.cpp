#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int factorial(int n)
{
    if(n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n) << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}