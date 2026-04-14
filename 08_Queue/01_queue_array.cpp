#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 100

class Queue {
    int front, rear;
public:
    int arr[MAX];

    Queue() { front = rear = -1; }

    void enqueue(int x)
    {
        if(rear == MAX-1) cout << "Queue Overflow\n";
        else
        {
            if(front == -1) front = 0;
            arr[++rear] = x;
        }
    }

    void dequeue()
    {
        if(front == -1 || front > rear) cout << "Queue Underflow\n";
        else front++;
    }

    int peek()
    {
        if(front == -1 || front > rear) return -1;
        return arr[front];
    }

    bool isEmpty() { return front == -1 || front > rear; }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << "\n";

    q.dequeue();
    cout << "After dequeue, front element: " << q.peek() << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}