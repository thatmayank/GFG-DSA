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

// ITERATIVE SOLUTION
//  int maxBinaryTree(Node *root)
//  {
//      int mx = INT_MIN;
//      if (root == NULL)
//          return mx;
//      queue<Node *> q;
//      q.push(root);
//      while (q.empty() != true)
//      {
//          Node *curr = q.front();
//          q.pop();
//          mx = max(mx, curr->key);
//          if (curr->left != NULL)
//              q.push(curr->left);
//          if (curr->right != NULL)
//              q.push(curr->right);
//      }
//      return mx;
//  }

// RECURSION SOLUTION
int maxBinaryTree(Node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return max(root->key, max(maxBinaryTree(root->left), maxBinaryTree(root->right)));
}

int main()
{
    Node *root = NULL;
    root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(990);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);
    cout << maxBinaryTree(root);
    return 0;
}