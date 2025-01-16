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

Node *same()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;

    while (cin >> value && value != -1)
    {
        Node *nNode = new Node(value);
        if (!head)
        {
            head = tail = nNode;
        }
        else
        {
            tail->next = nNode;
            tail = nNode;
        }
    }

    return head;
}

bool equal(Node *head1, Node *head2)
{
    Node *C1 = head1;
    Node *C2 = head2;

    while (C1 && C2)
    {
        if (C1->val != C2->val)
        {
            return false;
        }
        C1 = C1->next;
        C2 = C2->next;
    }

    return C1 == NULL && C2 == NULL;
}

int main()
{
    Node *list1 = same();
    Node *list2 = same();

    if (equal(list1, list2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;



}
