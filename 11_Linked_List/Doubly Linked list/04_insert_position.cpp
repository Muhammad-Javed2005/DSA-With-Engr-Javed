#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head = NULL;

void InsertHead(int val)
{
    Node *n = new Node{val, head, NULL};
    if (head)
        head->prev = n;
    head = n;
}
void InsertEnd(int val)
{
    Node *n = new Node{val, NULL, NULL};
    if (!head)
    {
        head = n;
        return;
    }
    Node *ptr = head;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = n;
    n->prev = ptr;
}

void InsertPosition(int pos, int val)
{
    if (pos == 1)
    {
        InsertHead(val);
        return;
    }
    Node *ptr = head;
    for (int i = 1; i < pos - 1 && ptr; i++)
        ptr = ptr->next;
    if (!ptr)
        return;
    Node *n = new Node{val, ptr->next, ptr};
    if (ptr->next)
        ptr->next->prev = n;
    ptr->next = n;
}

void Display()
{
    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    InsertHead(10);
    InsertEnd(30);
    InsertPosition(2, 20);
    cout << "After inserting at position 2: ";
    Display();

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}