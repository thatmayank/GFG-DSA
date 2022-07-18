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

int sizeBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    int sz = 0;
    while (q.empty() != true)
    {
        Node *curr = q.front();
        q.pop();
        sz++;
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
    return sz;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);
    cout << sizeBinaryTree(root);
    return 0;
}