// Delete Tail(Last Node) of Doubly Linked List

#include <bits/stdc++.h>
using namespace std;

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

Node *deleteTail(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *curr = head;
        while (curr->next->next != NULL)
            curr = curr->next;
        Node *temp = curr->next;
        curr->next = NULL;
        delete temp;
        return head;
    }
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
    Node *temp3 = new Node(40);

    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next = temp3;
    temp3->prev = temp2;

    printList(head);
    cout << endl;
    head = deleteTail(head);
    printList(head);
    return 0;
}