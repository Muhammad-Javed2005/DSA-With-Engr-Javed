#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int binary_number;
    cout << "Enter a binary number : ";
    cin >> binary_number;
    int ans = 0;
    int pow = 1;
    while (binary_number > 0)
    {
        int last_digit = binary_number % 10;
        ans = ans + last_digit * pow;
        pow = pow * 2;
        binary_number = binary_number / 10;
    }
    cout << "Decimal Number is : " << ans << endl;

    


    cout << "This program is developed by \"Engr. Muhammad Javed\"" << endl;
    return 0;
}