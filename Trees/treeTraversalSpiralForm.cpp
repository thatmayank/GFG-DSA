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

// void printSpiral(Node *root)
// {
//     if (root == NULL)
//         return;
//     queue<Node *> q;
//     stack<int> s;
//     bool odd = false;
//     q.push(root);
//     while (q.empty() == false)
//     {
//         int count = q.size();
//         for (int i = 0; i < count; i++)
//         {
//             Node *curr = q.front();
//             q.pop();
//             if (odd == true)
//                 s.push(curr->key);
//             else
//                 cout << curr->key << " ";
//             if (curr->left != NULL)
//                 q.push(curr->left);
//             if (curr->right != NULL)
//                 q.push(curr->right);
//         }
//         if (odd == true)
//         {
//             while (s.empty() != true)
//             {
//                 cout << s.top() << " ";
//                 s.pop();
//             }
//         }
//         odd = !odd;
//     }
// }

void printSpiral(Node *root)
{
    if (root == NULL)
        return;

    stack<Node *> s1;
    stack<Node *> s2;

    s1.push(root);

    while (s1.empty() != true || s2.empty() != true)
    {
        while (s1.empty() != true)
        {
            Node *curr = s1.top();
            s1.pop();
            cout << curr->key << " ";

            if (curr->left != NULL)
                s2.push(curr->left);
            if (curr->right != NULL)
                s2.push(curr->right);
        }

        while (s2.empty() != true)
        {
            Node *curr = s2.top();
            s2.pop();
            cout << curr->key << " ";

            if (curr->right != NULL)
                s1.push(curr->right);
            if (curr->left != NULL)
                s1.push(curr->left);
        }
    }
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printSpiral(root);
}