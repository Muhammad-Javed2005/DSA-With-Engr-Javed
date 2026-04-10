#include <iostream>
#include <algorithm>
#include <climits>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << "\n";
    s.pop();
    cout << "After pop, top element: " << s.top() << "\n";
    cout << "Stack empty? " << (s.empty() ? "Yes" : "No") << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}