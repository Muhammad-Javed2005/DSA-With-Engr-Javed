#include <iostream>
#include <algorithm>
#include <climits>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    stack<char> st;
    for(char c : str) st.push(c);

    cout << "Reversed string: ";
    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}