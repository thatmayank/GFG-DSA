// Merge Two Sorted Lists

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

Node *mergeLists(Node *list1, Node *list2)
{
    if (list1 == NULL && list2 == NULL)
        return NULL;
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    Node *head, *tail;

    if (list1->data < list2->data)
    {
        head = list1;
        list1 = list1->next;
    }
    else
    {
        head = list2;
        list2 = list2->next;
    }

    tail = head;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data < list2->data)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1 == NULL)
        tail->next = list2;
    if (list2 == NULL)
        tail->next = list1;

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
    Node *a = new Node(10);
    a->next = new Node(20);
    a->next->next = new Node(30);
    Node *b = new Node(5);
    b->next = new Node(35);
    printList(mergeLists(a, b));
    return 0;
}