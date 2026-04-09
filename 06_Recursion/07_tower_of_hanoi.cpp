#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void towerOfHanoi(int n, char source, char aux, char dest)
{
    if(n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << dest << "\n";
        return;
    }
    towerOfHanoi(n-1, source, dest, aux);
    cout << "Move disk " << n << " from " << source << " to " << dest << "\n";
    towerOfHanoi(n-1, aux, source, dest);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}