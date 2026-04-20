#include <iostream>
#include <algorithm>
#include <climits>
#include <map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1,2,2,3,1,4,2};
    map<int,int> freq;

    for(int x : arr) freq[x]++;

    cout << "Frequency of elements:\n";
    for(auto &p : freq)
        cout << p.first << " -> " << p.second << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}