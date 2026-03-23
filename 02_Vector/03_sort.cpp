#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {30, 10, 50, 20, 40};

    sort(v.begin(), v.end());

    cout << "Sorted Vector: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}