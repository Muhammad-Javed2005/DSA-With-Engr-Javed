#include <iostream>
#include <algorithm>
#include <climits>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1,2,3,4};
    vector<int> b = {3,4,5,6};

    set<int> s1(a.begin(), a.end());
    set<int> s2(b.begin(), b.end());

    set<int> uni, inter;

    // Union
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(uni, uni.begin()));
    // Intersection
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(inter, inter.begin()));

    cout << "Union: ";
    for(int x : uni) cout << x << " ";
    cout << "\nIntersection: ";
    for(int x : inter) cout << x << " ";
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}