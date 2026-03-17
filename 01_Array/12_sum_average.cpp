#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];

    double average = sum / (double)size;

    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}