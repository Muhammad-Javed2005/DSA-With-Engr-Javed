#include <iostream>
#include <queue>
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

void LevelOrder(Node *node)
{
    if (!node)
        return;
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 20);
    Insert(root, 15);
    cout << "Level order traversal: ";
    LevelOrder(root);
    cout << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}