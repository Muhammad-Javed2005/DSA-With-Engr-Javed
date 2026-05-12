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

bool Search(Node *node, int key)
{
    if (!node)
        return false;
    if (node->data == key)
        return true;
    if (key < node->data)
        return Search(node->left, key);
    return Search(node->right, key);
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);

    cout << "Found? " << (Search(root, 20) ? "Yes" : "No") << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}