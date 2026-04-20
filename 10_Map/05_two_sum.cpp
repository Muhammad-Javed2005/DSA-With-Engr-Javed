#include <iostream>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> mp;

    for(int i = 0; i < arr.size(); i++)
    {
        int complement = target - arr[i];
        if(mp.count(complement))
        {
            cout << "Pair found at index " << mp[complement] << " and " << i << "\n";
            break;
        }
        mp[arr[i]] = i;
    }

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}