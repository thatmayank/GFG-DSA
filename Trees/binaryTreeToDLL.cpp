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

Node *binaryTreeToDLL(Node *root)
{
    if (root == NULL)
        return root;
    static Node *prev = NULL;
    static Node *head = NULL;
    binaryTreeToDLL(root->left);
    if (prev == NULL)
        head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    binaryTreeToDLL(root->right);
    return head;
}

void printLL(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->key << " ";
        curr = curr->right;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(50);
    root->left->right->right = new Node(50);
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);
    Node *head = binaryTreeToDLL(root);
    printLL(head);
    return 0;
}