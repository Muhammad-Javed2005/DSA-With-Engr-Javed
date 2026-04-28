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

void DeleteValue(int val)
{
    Node *ptr = head;
    while (ptr && ptr->data != val)
        ptr = ptr->next;
    if (!ptr)
        return;
    if (ptr->prev)
        ptr->prev->next = ptr->next;
    else
        head = ptr->next;
    if (ptr->next)
        ptr->next->prev = ptr->prev;
    delete ptr;
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
    InsertEnd(20);
    DeleteValue(20);
    cout << "After deleting value 20: ";
    Display();

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}