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

Node *LCA(Node *node, int n1, int n2)
{
    if (!node)
        return NULL;
    if (node->data > n1 && node->data > n2)
        return LCA(node->left, n1, n2);
    if (node->data < n1 && node->data < n2)
        return LCA(node->right, n1, n2);
    return node;
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);
    Insert(root, 15);

    Node *ans = LCA(root, 5, 15);
    if (ans)
        cout << "LCA: " << ans->data << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}