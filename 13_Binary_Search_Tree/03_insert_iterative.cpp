#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = NULL;

void Insert(int val)
{
    Node *newNode = new Node{val, NULL, NULL};
    if (!root)
    {
        root = newNode;
        return;
    }

    Node *curr = root;
    Node *parent = NULL;

    while (curr)
    {
        parent = curr;
        if (val < curr->data)
            curr = curr->left;
        else
            curr = curr->right;
    }

    if (val < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;
}

int main()
{
    Insert(10);
    Insert(5);
    Insert(20);
    Insert(15);

    cout << "Inserted Successfully" << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}