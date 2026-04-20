#include <iostream>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    vector<int> arr = {1,1,1,2,2,3};
    int k = 2;
    unordered_map<int,int> freq;

    for(int x : arr) freq[x]++;

    // Max-heap based on frequency
    priority_queue<pair<int,int>> pq;
    for(auto &p : freq) pq.push({p.second, p.first});

    cout << k << " most frequent elements: ";
    for(int i = 0; i < k; i++)
    {
        cout << pq.top().second << " ";
        pq.pop();
    }
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}