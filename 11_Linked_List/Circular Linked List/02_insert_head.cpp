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

void InsertHead(int val)
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
    n->next = head;
    ptr->next = n;
    head = n;
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
    InsertHead(20);
    InsertHead(10);
    cout << "After inserting at head: ";
    Display();

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}