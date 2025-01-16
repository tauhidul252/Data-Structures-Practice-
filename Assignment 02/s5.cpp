#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

Node *build()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (cin >> value && value != -1)
    {
        Node *newNode = new Node(value);
        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void rDuplicat(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *runner = current;
        while (runner->next != NULL)
        {
            if (runner->next->val == current->val)
            {
                Node *duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            }
            else
            {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

void print(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head = build();
    rDuplicat(head);
    print(head);
    return 0;
}
