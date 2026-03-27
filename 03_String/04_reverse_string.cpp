#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string str = "HelloWorld";
    reverse(str.begin(), str.end());

    cout << "Reversed String: " << str << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}