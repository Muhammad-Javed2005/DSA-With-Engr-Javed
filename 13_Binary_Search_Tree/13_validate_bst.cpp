#include <iostream>
#include <cmath>
#include <string>
#include <climits>  

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

bool Validate(Node *node, int minV, int maxV)
{
    if (!node)
        return true;
    if (node->data <= minV || node->data >= maxV)
        return false;
    return Validate(node->left, minV, node->data) &&
           Validate(node->right, node->data, maxV);
}

int main()
{
    Node *root = new Node{10, NULL, NULL};
    root->left = new Node{5, NULL, NULL};
    root->right = new Node{20, NULL, NULL};

    cout << "Valid BST? " << (Validate(root, INT_MIN, INT_MAX) ? "Yes" : "No") << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}