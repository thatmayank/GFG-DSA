// Reverse a Linked List

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

Node *reverseLL(Node *head)
{
    Node *next = NULL;
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printList(Node *head)
{

    if (head == NULL)
        return;

    cout << head->data << " ";

    printList(head->next);
}

int main()
{
    Node *head = NULL;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printList(head);
    cout << endl;
    head = reverseLL(head);
    printList(head);
    return 0;
}