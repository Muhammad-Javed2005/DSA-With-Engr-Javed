#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 100

class Stack {
    int top;
public:
    int arr[MAX];

    Stack() { top = -1; }

    void push(int x) {
        if(top >= MAX-1) cout << "Stack Overflow\n";
        else arr[++top] = x;
    }

    void pop() {
        if(top < 0) cout << "Stack Underflow\n";
        else top--;
    }

    int peek() {
        if(top < 0) return -1;
        return arr[top];
    }

    bool isEmpty() { return top < 0; }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << "\n";

    s.pop();
    cout << "After pop, top element: " << s.peek() << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}