#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void permute(string str, int l, int r)
{
    if(l == r)
    {
        cout << str << "\n";
        return;
    }
    for(int i = l; i <= r; i++)
    {
        swap(str[l], str[i]);
        permute(str, l+1, r);
        swap(str[l], str[i]);
    }
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    cout << "All permutations:\n";
    permute(str, 0, str.length()-1);

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}