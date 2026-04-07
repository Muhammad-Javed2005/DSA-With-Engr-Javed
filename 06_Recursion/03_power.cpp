#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int power(int x, int n)
{
    if(n == 0) return 1;
    return x * power(x, n-1);
}

int main()
{
    int x, n;
    cout << "Enter base and exponent: ";
    cin >> x >> n;

    cout << x << " ^ " << n << " = " << power(x, n) << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}