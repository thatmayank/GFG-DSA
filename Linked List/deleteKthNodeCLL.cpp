// Delete Kth Node from the begining in a Circular Linked List

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

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    int t = head->data;
    head->data = head->next->data;
    head->next->data = t;

    Node *temp = head->next;
    head->next = head->next->next;

    delete temp;
    return head;
}

Node *deleteKthNode(Node *head, int k)
{
    if(head == NULL) return head;
    if (k == 1)
        return deleteHead(head);

    else
    {
        Node *curr = head;
        for (int i = 1; i <= k - 2; i++)
            curr = curr->next;

        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return head;
    }
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
    head->next = head;
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    // head->next->next->next->next = head;
    printList(head);
    int k = 1;
    head = deleteKthNode(head, k);
    cout << endl;
    printList(head);
    return 0;
}