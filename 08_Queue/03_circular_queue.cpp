#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define MAX 5

class CircularQueue {
    int front, rear;
public:
    int arr[MAX];

    CircularQueue() { front = rear = -1; }

    void enqueue(int x)
    {
        if((front == 0 && rear == MAX-1) || (rear + 1) % MAX == front)
            cout << "Queue Overflow\n";
        else
        {
            if(front == -1) front = 0;
            rear = (rear + 1) % MAX;
            arr[rear] = x;
        }
    }

    void dequeue()
    {
        if(front == -1) cout << "Queue Underflow\n";
        else if(front == rear) front = rear = -1;
        else front = (front + 1) % MAX;
    }

    int peek()
    {
        if(front == -1) return -1;
        return arr[front];
    }

    bool isEmpty() { return front == -1; }
};

int main()
{
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.peek() << "\n";

    q.dequeue();
    cout << "After dequeue, front element: " << q.peek() << "\n";

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}