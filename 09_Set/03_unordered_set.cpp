#include <iostream>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(10); // duplicate ignored
    us.insert(30);

    cout << "Unordered set elements: ";
    for(int x : us) cout << x << " ";
    cout << "\n";

    cout << "Is 20 present? " << (us.count(20) ? "Yes" : "No") << "\n";

    us.erase(20);
    cout << "After removing 20: ";
    for(int x : us) cout << x << " ";
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}