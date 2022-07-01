// Delete Last node in Singly Linked List

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

Node *insertAtBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node *insertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
        return temp;

    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;

    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;

    while (curr->next->next != NULL)
        curr = curr->next;

    delete curr->next;
    curr->next = NULL;
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
    head = insertAtBegin(head, 30); // 30
    head = insertAtBegin(head, 20); // 20 30
    head = insertAtBegin(head, 10); // 10 20 30
    head = insertAtEnd(head, 50);   // 10 20 30 50
    head = insertAtEnd(head, 60);   // 10 20 30 50 60
    head = insertAtEnd(head, 70);   // 10 20 30 50 60 70
    head = deleteTail(head);
    printList(head);
    return 0;
}