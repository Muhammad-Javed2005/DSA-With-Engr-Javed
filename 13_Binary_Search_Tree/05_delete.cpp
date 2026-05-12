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

Node *FindMin(Node *node)
{
    while (node && node->left)
        node = node->left;
    return node;
}

Node *DeleteNode(Node *node, int key)
{
    if (!node)
        return NULL;

    if (key < node->data)
        node->left = DeleteNode(node->left, key);
    else if (key > node->data)
        node->right = DeleteNode(node->right, key);
    else
    {
        if (!node->left && !node->right)
        {
            delete node;
            return NULL;
        }
        else if (!node->left)
        {
            Node *temp = node->right;
            delete node;
            return temp;
        }
        else if (!node->right)
        {
            Node *temp = node->left;
            delete node;
            return temp;
        }
        Node *temp = FindMin(node->right);
        node->data = temp->data;
        node->right = DeleteNode(node->right, temp->data);
    }
    return node;
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);
    root = DeleteNode(root, 5);

    cout << "Deleted 5" << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}