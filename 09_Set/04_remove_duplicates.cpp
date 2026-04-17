#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> arr = {1,2,2,3,4,3,5};
    set<int> s(arr.begin(), arr.end()); // removes duplicates

    cout << "Array after removing duplicates: ";
    for(int x : s) cout << x << " ";
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}