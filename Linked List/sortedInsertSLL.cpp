// Sorted Insert in a Singly Linked List

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

Node *sortedInsert(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;

    if (temp->data < head->data)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;

    while (curr->next != NULL && curr->next->data < temp->data)
        curr = curr->next;

    temp->next = curr->next;
    curr->next = temp;
    return head;
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
    int data = 25;
    printList(head);
    cout << endl;
    head = sortedInsert(head, data);
    printList(head);
    return 0;
}