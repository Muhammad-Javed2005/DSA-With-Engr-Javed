#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 5, 7, 9, 11};
    int target = 12;

    int left = 0, right = v.size() - 1;
    bool found = false;

    while(left < right)
    {
        int sum = v[left] + v[right];
        if(sum == target)
        {
            cout << "Pair found: " << v[left] << " + " << v[right] << " = " << target << "\n";
            found = true;
            break;
        }
        else if(sum < target)
            left++;
        else
            right--;
    }

    if(!found)
        cout << "No pair found\n";

    cout << "Program is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}