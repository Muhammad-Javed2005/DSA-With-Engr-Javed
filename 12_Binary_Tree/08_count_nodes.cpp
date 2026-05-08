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

int CountNodes(Node *node)
{
    if (!node)
        return 0;
    return 1 + CountNodes(node->left) + CountNodes(node->right);
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);
    Insert(root, 15);

    cout << "Total Nodes: " << CountNodes(root) << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}