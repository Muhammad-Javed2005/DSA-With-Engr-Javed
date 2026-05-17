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

Node *Insert(Node *node, int val)
{
    if (!node)
        return new Node{val, NULL, NULL};
    if (val < node->data)
        node->left = Insert(node->left, val);
    else
        node->right = Insert(node->right, val);
    return node;
}

int Ceil(Node *node, int key)
{
    int ceilVal = -1;
    while (node)
    {
        if (node->data == key)
            return node->data;
        if (node->data < key)
            node = node->right;
        else
        {
            ceilVal = node->data;
            node = node->left;
        }
    }
    return ceilVal;
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);

    cout << "Ceil of 18: " << Ceil(root, 18) << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}