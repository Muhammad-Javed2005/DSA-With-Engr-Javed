#include <iostream>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> um;
    um["One"] = 1;
    um["Two"] = 2;
    um["Three"] = 3;

    cout << "Unordered map elements:\n";
    for(auto &p : um)
        cout << p.first << " -> " << p.second << "\n";

    cout << "Is key \"Two\" present? " << (um.count("Two") ? "Yes" : "No") << "\n";

    um.erase("Two");
    cout << "After removing key \"Two\":\n";
    for(auto &p : um)
        cout << p.first << " -> " << p.second << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}