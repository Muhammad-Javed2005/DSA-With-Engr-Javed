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

// Create initial circular list
int main()
{
    head = new Node{10, NULL};
    Node *n2 = new Node{20, head};
    Node *n3 = new Node{30, head};
    head->next = n2;
    n2->next = n3;
    n3->next = head;

    Node *ptr = head;
    cout << "Circular Linked List: ";
    if (ptr)
    {
        do
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        } while (ptr != head);
    }
    cout << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}