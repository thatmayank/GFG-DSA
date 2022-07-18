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
bool isChildrenSum(Node *root)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return true;
    int sum = 0;

    if (root->left != NULL)
        sum += root->left->key;
    if (root->right != NULL)
        sum += root->right->key;

    return (root->key == sum && isChildrenSum(root->left) && isChildrenSum(root->right));
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
    cout << boolalpha << isChildrenSum(root);
    return 0;
}