#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // Insert 99 at position 2
    v.insert(v.begin() + 2, 99);

    cout << "After Insertion: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // Erase element at position 3
    v.erase(v.begin() + 3);

    cout << "\nAfter Erase: ";
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}