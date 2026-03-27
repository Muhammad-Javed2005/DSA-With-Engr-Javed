#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string with spaces: ";
    getline(cin, str);

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    cout << "String after removing spaces: " << str << "\n";
    
    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}



