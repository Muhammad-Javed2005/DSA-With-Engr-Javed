#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string str = "HelloWorld";

    cout << "Original String: " << str << "\n";
    cout << "Length: " << str.length() << "\n";
    cout << "Empty? " << (str.empty() ? "Yes" : "No") << "\n";
    cout << "Character at index 4: " << str.at(4) << "\n";

    str.push_back('X');
    cout << "After push_back('X'): " << str << "\n";

    str.pop_back();
    cout << "After pop_back(): " << str << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}