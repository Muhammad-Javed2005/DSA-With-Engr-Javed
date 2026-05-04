#include <iostream>
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
        head = n;
        return;
    }
    Node *ptr = head;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = n;
}

bool DetectCycle()
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}

int main()
{
    InsertEnd(10);
    InsertEnd(20);
    InsertEnd(30);
    InsertEnd(40);
    // Make cycle for testing
    head->next->next->next->next = head->next;
    cout << "Cycle detected? " << (DetectCycle() ? "Yes" : "No") << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}