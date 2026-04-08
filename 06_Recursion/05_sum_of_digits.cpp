#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int sumOfDigits(int n)
{
    if(n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Sum of digits: " << sumOfDigits(n) << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}