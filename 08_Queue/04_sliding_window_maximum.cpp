#include <iostream>
#include <algorithm>
#include <climits>
#include <deque>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    deque<int> dq;

    cout << "Sliding Window Maximum: ";
    for(int i = 0; i < arr.size(); i++)
    {
        while(!dq.empty() && dq.front() <= i-k) dq.pop_front();
        while(!dq.empty() && arr[i] >= arr[dq.back()]) dq.pop_back();
        dq.push_back(i);
        if(i >= k-1) cout << arr[dq.front()] << " ";
    }
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}