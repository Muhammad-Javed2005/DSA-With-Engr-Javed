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

int main()
{
    head = new Node{10, NULL, NULL};
    head->next = new Node{20, NULL, head};
    head->next->next = new Node{30, NULL, head->next};

    Node *ptr = head;
    cout << "Doubly Linked List: ";
    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}