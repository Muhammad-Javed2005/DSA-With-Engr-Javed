#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    unordered_map<char,int> freq;
    queue<char> q;

    cout << "First Non-Repeating Characters: ";
    for(char c : s)
    {
        freq[c]++;
        if(freq[c] == 1) q.push(c);
        while(!q.empty() && freq[q.front()] > 1) q.pop();
        if(!q.empty()) cout << q.front() << " ";
        else cout << "-1 ";
    }
    cout << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}