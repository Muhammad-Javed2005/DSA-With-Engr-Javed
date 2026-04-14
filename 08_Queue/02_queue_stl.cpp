#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << "\n";
    cout << "Rear element: " << q.back() << "\n";

    q.pop();
    cout << "After pop, front element: " << q.front() << "\n";

    cout << "Queue empty? " << (q.empty() ? "Yes" : "No") << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}