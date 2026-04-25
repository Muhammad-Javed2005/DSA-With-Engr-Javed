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

void DeletePosition(int pos)
{
    if (!head)
        return;
    if (pos == 1)
    {
        Node *last = head;
        while (last->next != head)
            last = last->next;
        Node *temp = head;
        head = head->next;
        last->next = head;
        delete temp;
        return;
    }
    Node *ptr = head;
    Node *prev = NULL;
    int i = 1;
    while (i < pos && ptr->next != head)
    {
        prev = ptr;
        ptr = ptr->next;
        i++;
    }
    if (i != pos)
        return;
    prev->next = ptr->next;
    delete ptr;
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
    InsertEnd(40);
    DeletePosition(2);
    cout << "After deleting position 2: ";
    Display();

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}