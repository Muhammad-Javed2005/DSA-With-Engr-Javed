#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void printSubsets(string str, string curr = "", int index = 0)
{
    if(index == str.length())
    {
        cout << curr << "\n";
        return;
    }
    printSubsets(str, curr, index+1);         // exclude
    printSubsets(str, curr + str[index], index+1); // include
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    cout << "All subsets:\n";
    printSubsets(str);

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}