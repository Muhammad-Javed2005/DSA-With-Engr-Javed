#include <iostream>
#include <algorithm>
#include <climits>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    cout << "Map elements:\n";
    for(auto &p : m)
        cout << p.first << " -> " << p.second << "\n";

    cout << "Is key 2 present? " << (m.count(2) ? "Yes" : "No") << "\n";

    m.erase(2);
    cout << "After removing key 2:\n";
    for(auto &p : m)
        cout << p.first << " -> " << p.second << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}