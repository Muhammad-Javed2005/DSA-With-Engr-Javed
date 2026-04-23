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

void Display()
{
    if (!head)
        return;
    Node *ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
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