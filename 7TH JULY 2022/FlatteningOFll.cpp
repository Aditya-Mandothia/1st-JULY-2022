#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

class Node
{
public:
    int data;
    Node *next;
    Node *child;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->child = NULL;
    }
};

Node *merge(Node *a, Node *b)
{
    Node *temp = new Node(0);
    Node *res = temp;

    while (a != NULL and b != NULL)
    {
        if (a->data < b->data)
        {
            temp->child = a;
            temp = temp->child;
            a = a->child;
        }
        else
        {
            temp->child = b;
            temp = temp->child;
            b = b->child;
        }
    }

    if (a)
        temp->child = a;
    else
        temp->child = b;

    return res->child;
}
Node *flattenLinkedList(Node *root)
{
    // Write your code here
    if (root == NULL || root->next == NULL)
        return root;

    root->next = flattenLinkedList(root->next);
    root = merge(root, root->next);

    return root;
}
