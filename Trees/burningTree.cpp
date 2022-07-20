// Burn  a Tree from a leaf Node

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};

int findMaxDistance(map<Node *, Node *> &mpp, Node *node)
{
    queue<Node *> q;
    q.push(node);
    int timer = 0;
    map<Node *, int> vis;
    vis[node] = 1;
    while (q.empty() != true)
    {
        int count = q.size();
        int flag = 0;
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left != NULL && vis[curr->left] != 1)
            {
                flag = 1;
                vis[curr->left] = 1;
                q.push(curr->left);
            }
            if (curr->right != NULL && vis[curr->right] != 1)
            {
                flag = 1;
                vis[curr->right] = 1;
                q.push(curr->right);
            }
            if (mpp[curr] && vis[mpp[curr]] != 1)
            {
                flag = 1;
                vis[mpp[curr]] = 1;
                q.push(mpp[curr]);
            }
        }
        if (flag == 1)
            timer++;
    }
    return timer;
}

Node *bfsToMapParent(Node *root, map<Node *, Node *> &mpp, int target)
{
    queue<Node *> q;
    q.push(root);
    Node *res;
    while (q.empty() != true)
    {
        Node *curr = q.front();
        q.pop();
        if (curr->data == target)
            res = curr;

        if (curr->left != NULL)
        {
            mpp[curr->left] = curr;
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            mpp[curr->right] = curr;
            q.push(curr->right);
        }
    }
    return res;
}

int minTime(Node *root, int target)
{
    // Your code goes here
    map<Node *, Node *> mpp;
    Node *node = bfsToMapParent(root, mpp, target);
    int timer = findMaxDistance(mpp, node);
    return timer;
}

int main()
{

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(60);
    root->left->left->left->left = new Node(70);
    int dist = -1;
    int leaf = 40;
    int res = minTime(root, leaf);
    cout << res;
}