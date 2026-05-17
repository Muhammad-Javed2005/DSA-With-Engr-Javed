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

int Floor(Node *node, int key)
{
    int floorVal = -1;
    while (node)
    {
        if (node->data == key)
            return node->data;
        if (node->data > key)
            node = node->left;
        else
        {
            floorVal = node->data;
            node = node->right;
        }
    }
    return floorVal;
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);

    cout << "Floor of 18: " << Floor(root, 18) << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}