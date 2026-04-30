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
    cout << "After inserting at end: ";
    Display();

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}