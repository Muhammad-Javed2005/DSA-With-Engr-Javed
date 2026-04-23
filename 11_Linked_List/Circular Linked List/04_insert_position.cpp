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

void InsertPosition(int pos, int val)
{
    if (pos == 1)
    {
        InsertHead(val);
        return;
    }
    Node *ptr = head;
    int i = 1;
    while (i < pos - 1 && ptr->next != head)
    {
        ptr = ptr->next;
        i++;
    }
    Node *n = new Node{val, ptr->next};
    ptr->next = n;
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
    InsertHead(10);
    InsertPosition(2, 20);
    InsertPosition(3, 30);
    cout << "After inserting at positions: ";
    Display();

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}