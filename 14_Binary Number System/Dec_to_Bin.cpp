#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int ans = 0;
    int pow = 1;
    int decimal_number;
    cout << "Enter a decimal number : ";
    cin >> decimal_number; 
    while (decimal_number > 0)
    {
        int last_digit = decimal_number % 2;
        ans = ans + last_digit * pow;
        pow = pow * 10;
        decimal_number = decimal_number / 2;
    }
    cout << "Binary Number is : " << ans << endl;
    
    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}