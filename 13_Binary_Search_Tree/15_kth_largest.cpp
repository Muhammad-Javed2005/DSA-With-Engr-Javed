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
int countK = 0;

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

void KthLargest(Node *node, int k)
{
    if (!node)
        return;
    KthLargest(node->right, k);
    countK++;
    if (countK == k)
    {
        cout << "Kth Largest: " << node->data << endl;
        return;
    }
    KthLargest(node->left, k);
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);
    Insert(root, 15);

    KthLargest(root, 2);

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}