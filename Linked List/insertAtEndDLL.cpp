// Insert at End in Doubly Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *insertAtEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
        return temp;

    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
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
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    printList(head);
    cout << endl;
    head = insertAtEnd(head, 5);
    printList(head);
    return 0;
}
