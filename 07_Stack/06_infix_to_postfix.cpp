#include <iostream>
#include <algorithm>
#include <climits>
#include <stack>
#include <string>
using namespace std;

int precedence(char c)
{
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string result = "";

    for(char c : s)
    {
        if(isalnum(c)) result += c;
        else if(c == '(') st.push(c);
        else if(c == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && precedence(c) <= precedence(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty())
    {
        result += st.top();
        st.pop();
    }

    return result;
}

int main()
{
    string expr;
    cout << "Enter infix expression: ";
    cin >> expr;

    cout << "Postfix expression: " << infixToPostfix(expr) << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}