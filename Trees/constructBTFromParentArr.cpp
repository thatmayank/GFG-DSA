// C++ program to construct a Binary Tree from parent array
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left = NULL;
    struct Node *right = NULL;
    Node() {}

    Node(int x) { data = x; }
};

// Function to construct binary tree from parent array.
Node *createTree(int parent[], int n)
{
    // Your code here
    Node *root = NULL;
    if (n == 0)
        return root;

    vector<bool> vis(n);
    fill(vis.begin(), vis.end(), false);

    for (int i = 0; i < n; i++)
    {
        if (parent[i] == -1)
        {
            root = new Node(i);
            vis[i] = true;
            break;
        }
    }

    queue<Node *> q;
    q.push(root);

    while (q.empty() != true)
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();

            for (int j = 0; j < n; j++)
            {
                if (parent[j] == curr->data && vis[j] != true)
                {
                    curr->left = new Node(j);
                    vis[j] = true;
                    q.push(curr->left);
                    break;
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (parent[j] == curr->data && vis[j] != true)
                {
                    curr->right = new Node(j);
                    vis[j] = true;
                    q.push(curr->right);
                    break;
                }
            }
        }
    }
    return root;
}

// Function for inorder traversal
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Driver code
int main()
{
    int parent[] = {-1, 0, 0, 1, 1, 3, 5};
    int n = sizeof parent / sizeof parent[0];
    Node *root = createTree(parent, n);
    cout << "Inorder Traversal of constructed tree\n";
    inorder(root);
    return 0;
}
