// Count Nodes in Complete Binary Tree

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int countNode(Node *root)
{
    if (root == NULL)
        return 0;
    int lh = 0, rh = 0;

    Node *curr = root;
    while (curr != NULL)
    {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr != NULL)
    {
        rh++;
        curr = curr->right;
    }
    if (lh == rh)
        return (1 << lh) - 1;
    else
        return 1 + countNode(root->left) + countNode(root->right);
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(60);
    root->left->right = new Node(70);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    cout << countNode(root);
}