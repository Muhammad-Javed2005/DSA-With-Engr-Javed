#include <iostream>
#include <algorithm>
#include <climits>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    for(char c : s)
    {
        if(c == '(' || c == '{' || c == '[')
            st.push(c);
        else
        {
            if(st.empty()) return false;
            if(c == ')' && st.top() != '(') return false;
            if(c == '}' && st.top() != '{') return false;
            if(c == ']' && st.top() != '[') return false;
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cout << "Enter parentheses string: ";
    cin >> s;

    if(isValid(s)) cout << "Valid\n";
    else cout << "Invalid\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}