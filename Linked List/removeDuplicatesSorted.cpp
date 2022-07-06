// Remove Duplicates from Sorted List

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

Node *removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = head;
    Node *curr = head->next;

    while (curr != NULL)
    {
        if (prev->data != curr->data)
        {
            prev = prev->next;
            curr = curr->next;
        }
        else
        {
            Node *temp = curr;
            curr = curr->next;
            prev->next = curr;
            delete temp;
        }
    }
    return head;
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
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    printList(head);
    cout << endl;
    head = removeDuplicates(head);
    printList(head);
    return 0;
}