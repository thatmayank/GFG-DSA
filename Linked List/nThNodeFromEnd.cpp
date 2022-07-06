// Find Middle of Linked List

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

void nthNodeFromEnd(Node *head, int n)
{
    if (head == NULL)
        return;
    Node *first = head;
    for (int i = 0; i < n; i++)
    {
        if (first == NULL)
            return;
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->data;
}

int main()
{
    Node *head = NULL;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    nthNodeFromEnd(head, 1);
    return 0;
}