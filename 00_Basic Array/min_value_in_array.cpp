#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    int marks[8];

    // For store in array
    for (int i = 0; i < 7; i++)
    {
        cin >> marks[i];
    }

    int smallest = INT16_MAX;
    int Largest = INT16_MIN;

    for (int i = 0; i < 7; i++)
    {
        smallest = min(marks[i], smallest);
        Largest = max(marks[i], Largest);
    }

    cout << "Minimum value of array is " << smallest << endl;
    cout << "Maximum value of array is " << Largest << endl;

    cout << "This program is formed by Engineer Muhammad Javed";

    return 0;
}