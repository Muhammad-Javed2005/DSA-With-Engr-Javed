#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int k = 3; // window size

    cout << "Maximum of each sliding window: ";

    for(int i = 0; i <= v.size() - k; i++)
    {
        int maxVal = INT_MIN;
        for(int j = i; j < i + k; j++)
            maxVal = max(maxVal, v[j]);

        cout << maxVal << " ";
    }

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}