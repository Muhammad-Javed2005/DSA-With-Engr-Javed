#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;

void InsertEnd(int val)
{
    Node *n = new Node{val, NULL};
    if (!head)
    {
        n->next = n;
        head = n;
        return;
    }
    Node *ptr = head;
    while (ptr->next != head)
        ptr = ptr->next;
    ptr->next = n;
    n->next = head;
}

bool DetectCycle()
{
    if (!head)
        return false;
    Node *slow = head;
    Node *fast = head;
    do
    {
        if (!fast || !fast->next)
            return false;
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);
    return true;
}

int main()
{
    InsertEnd(10);
    InsertEnd(20);
    InsertEnd(30);
    InsertEnd(40);
    cout << "Cycle detected? " << (DetectCycle() ? "Yes" : "No") << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}