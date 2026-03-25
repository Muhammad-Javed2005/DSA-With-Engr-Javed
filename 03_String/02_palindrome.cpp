#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    string rev = str;
    reverse(rev.begin(), rev.end());

    if(str == rev)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}