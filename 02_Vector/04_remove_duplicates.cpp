#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 20, 30, 30, 30, 40};

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << "After Removing Duplicates: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}