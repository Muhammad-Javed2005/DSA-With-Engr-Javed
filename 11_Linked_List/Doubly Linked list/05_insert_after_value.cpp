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

void InsertAfterValue(int target, int val)
{
    Node *ptr = head;
    while (ptr && ptr->data != target)
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
    InsertEnd(10);
    InsertEnd(20);
    InsertEnd(30);
    InsertAfterValue(20, 25);
    cout << "After inserting 25 after 20: ";
    Display();

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}