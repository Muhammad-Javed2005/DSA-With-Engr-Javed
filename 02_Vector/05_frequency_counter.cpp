#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 20, 10, 30, 10};

    map<int, int> freq;
    for(int i = 0; i < v.size(); i++)
        freq[v[i]]++;

    cout << "Frequency of Elements:\n";
    for(auto &p : freq)
        cout << p.first << " -> " << p.second << "\n";

    cout << "Program is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}