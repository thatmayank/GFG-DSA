// Insert at given position in Singly Linked List

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

Node *insertAtPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
        curr = curr->next;

    if (curr == NULL)
        return head;

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
    int pos = 2;
    int data = 99;
    printList(head);
    cout << endl;
    head = insertAtPos(head, pos, data);
    printList(head);
    return 0;
}