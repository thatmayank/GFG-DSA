// Search in Singly Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int searchLL(Node *head, int x)
{
    Node *curr = head;
    int count = 1;
    while (curr != NULL)
    {
        if (curr->data == x)
            return count;
        curr = curr->next;
        count++;
    }
    return -1;
}

int searchLLRecursive(Node *head, int x)
{
    if (head == NULL)
        return -1;

    if (head->data == x)
        return 1;

    else
    {
        int res = searchLLRecursive(head->next, x);
        if (res == -1)
            return -1;
        else
            return res + 1;
    }
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printList(head);
    cout << endl;
    cout << searchLLRecursive(head, 30) << endl;
    cout << searchLL(head, 50) << endl;
    return 0;
}