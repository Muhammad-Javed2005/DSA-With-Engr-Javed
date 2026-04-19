#include <iostream>
#include <algorithm>
#include <climits>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mm;
    mm.insert({1, "One"});
    mm.insert({1, "Uno"});
    mm.insert({2, "Two"});

    cout << "Multimap elements:\n";
    for(auto &p : mm)
        cout << p.first << " -> " << p.second << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}