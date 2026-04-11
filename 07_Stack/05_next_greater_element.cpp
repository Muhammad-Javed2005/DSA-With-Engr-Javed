#include <iostream>
#include <algorithm>
#include <climits>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {4, 5, 2, 25};
    int n = arr.size();
    vector<int> nge(n, -1);
    stack<int> st;

    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && arr[i] > arr[st.top()])
        {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    cout << "Next Greater Elements: ";
    for(int i = 0; i < n; i++)
        cout << nge[i] << " ";
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}