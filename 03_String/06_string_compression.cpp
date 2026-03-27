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

    string compressed = "";
    int count = 1;

    for(int i = 0; i < str.length(); i++)
    {
        if(i+1 < str.length() && str[i] == str[i+1])
            count++;
        else
        {
            compressed += str[i];
            if(count > 1)
                compressed += to_string(count);
            count = 1;
        }
    }

    cout << "Compressed String: " << compressed << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}