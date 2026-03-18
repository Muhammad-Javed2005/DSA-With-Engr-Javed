#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Vector Elements: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nSize of vector: " << v.size();
    cout << "\nEmpty? " << (v.empty() ? "Yes" : "No");

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}