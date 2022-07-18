// construct binary tree from inorder and preorder traversal

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

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

int preIndex = 0;
Node *cTree(int in[], int pre[], int is, int ie)
{
    if (is > ie)
        return NULL;
    Node *curr = new Node(pre[preIndex++]);

    int inIndex;
    for (int i = is; i <= ie; i++)
    {
        if (curr->key == in[i])
        {
            inIndex = i;
            break;
        }
    }

    curr->left = cTree(in, pre, is, inIndex - 1);
    curr->right = cTree(in, pre, inIndex + 1, ie);

    return curr;
}

int main()
{

    int in[] = {20, 10, 40, 30, 50};
    int pre[] = {10, 20, 30, 40, 50};
    int n = sizeof(in) / sizeof(in[0]);
    Node *root = cTree(in, pre, 0, n - 1);
    inorder(root);
}