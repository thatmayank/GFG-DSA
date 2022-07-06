// Insert at begin of Circular Doubly Linked List

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

// efficient method T.C. = O(1)
// Node *insertAtBegin(Node *head, int data)
// {
//     Node *temp = new Node(data);

//     if (head == NULL)
//     {
//         temp->prev = temp;
//         temp->next = temp;
//         return temp;
//     }

//     temp->next = head->next;
//     temp->prev = head;
//     head->next = temp;
//     temp->next->prev = temp;

//     int t = head->data;
//     head->data = temp->data;
//     temp->data = t;

//     return head;
// }

//Another approach
Node *insertAtBegin(Node *head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        temp->prev = temp;
        temp->next = temp;
        return temp;
    }

    temp->prev = head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;

    return temp;
}

void printList(Node *head)
{
    if (head == NULL)
        return;

    Node *curr = head;

    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
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
    temp2->next = head;
    head->prev = temp2;

    printList(head);
    int data = 15;
    head = insertAtBegin(head, data);
    cout << endl;
    printList(head);
    return 0;
}