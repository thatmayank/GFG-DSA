#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

// RECURSION SOLUTION
bool isBalancedTree(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return (abs(isBalancedTree(root->left) - isBalancedTree(root->right)));
}

int main()
{
    Node *root = NULL;
    root = new Node(10);
    root->left = new Node(4);
    root->right = new Node(6);
    root->left->left = new Node(3);
    root->left->right = new Node(1);
    root->right->right = new Node(6);
    root->right->right->left = new Node(3);
    root->right->right->right = new Node(3);
    root->right->right->right->left = new Node(3);
    cout << boolalpha << isBalancedTree(root);
    return 0;
}