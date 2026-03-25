#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2)
        cout << "Anagram\n";
    else
        cout << "Not Anagram\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}