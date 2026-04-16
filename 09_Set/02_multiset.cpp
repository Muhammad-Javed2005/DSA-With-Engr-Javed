#include <iostream>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // duplicates allowed
    ms.insert(30);

    cout << "Multiset elements: ";
    for(int x : ms) cout << x << " ";
    cout << "\n";

    ms.erase(ms.find(10)); // remove one occurrence
    cout << "After removing one 10: ";
    for(int x : ms) cout << x << " ";
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}