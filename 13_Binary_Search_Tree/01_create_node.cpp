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
    root->left = new Node{5, NULL, NULL};
    root->right = new Node{20, NULL, NULL};

    cout << "Root: " << root->data << endl;

    cout << "\nProgram is developed by \"Engr. Muhammad Javed\"\n\n";
    return 0;
}