#include <iostream>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicate ignored
    s.insert(30);

    cout << "Set elements: ";
    for(int x : s) cout << x << " ";
    cout << "\n";

    cout << "Is 20 present? " << (s.count(20) ? "Yes" : "No") << "\n";

    s.erase(20);
    cout << "After removing 20: ";
    for(int x : s) cout << x << " ";
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}