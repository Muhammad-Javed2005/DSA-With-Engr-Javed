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

int main()
{
    root = new Node{10, NULL, NULL};
    root->left = new Node{20, NULL, NULL};
    root->right = new Node{30, NULL, NULL};

    cout << "Root: " << root->data << ", Left: " << root->left->data << ", Right: " << root->right->data << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}