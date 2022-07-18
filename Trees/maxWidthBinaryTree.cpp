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

int maxWidthBT(Node *root)
{
    int mx = 0;
    if (root == NULL)
        return mx;
    queue<Node *> q;
    q.push(root);

    while (q.empty() != true)
    {
        int count = q.size();
        mx = max(mx, count);

        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return mx;
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
    cout << maxWidthBT(root);
    return 0;
}