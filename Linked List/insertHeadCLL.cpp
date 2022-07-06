// Insert at begin of Circular Linked List

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

// Node *insertAtBegin(Node *head, int data)
// {
//     Node *temp = new Node(data);

//     if (head == NULL)
//     {
//         temp->next = temp;
//         return temp;
//     }

//     temp->next = head;

//     Node *curr = head;
//     while (curr->next != head)
//         curr = curr->next;
//     curr->next = temp;
//     return temp;
// }

// efficient method T.C. = O(1)
Node *insertAtBegin(Node *head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }

    temp->next = head->next;
    head->next = temp;

    int t = head->data;
    head->data = temp->data;
    temp->data = t;

    return head;
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
    // head->next = head;
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;
    printList(head);
    int data = 15;
    head = insertAtBegin(head, data);
    cout << endl;
    printList(head);
    return 0;
}