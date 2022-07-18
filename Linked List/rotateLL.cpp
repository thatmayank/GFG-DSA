#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *reverse(Node *head)
    {
        Node *curr = head, *prev = NULL;
        while (curr != NULL)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Function to rotate a linked list.
    Node *rotate(Node *head, int k)
    {
        // Your code here
        Node *curr = head;
        int sz = 0;
        while(curr != NULL) {
            sz++;
            curr=curr->next;
        }
        if(sz == k) return head;
        curr = head;
        for(int i = 1; i < k; i++) curr = curr->next;
        curr->next = reverse(curr->next);
        head = reverse(head);
        
        curr = head;
        int rem = sz - k;
        for(int i = 1; i < rem; i++) curr = curr->next;
        curr->next = reverse(curr->next);
        return head;
    }
};

// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    int n, val, k;
    cin >> n;

    cin >> val;
    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    cin >> k;

    Solution ob;
    head = ob.rotate(head, k);
    printList(head);
    return 1;
}
// } Driver Code Ends