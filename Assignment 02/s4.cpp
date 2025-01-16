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

class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void hed(int value)
    {
        Node *nNode = new Node(value);
        nNode->next = head;
        head = nNode;
        if (tail == NULL)
        {
            tail = head;
        }
    }

    void tal(int value)
    {
        Node *nNode = new Node(value);
        if (tail == NULL)
        {
            head = tail = nNode;
        }
        else
        {
            tail->next = nNode;
            tail = nNode;
        }
    }

    void deleteIndex(int index)
    {
        if (index < 0 || head == NULL)
            return;

        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
            }
            delete temp;
            return;
        }

        Node *now = head;
        for (int i = 0; i < index - 1; i++)
        {
            if (now == NULL || now->next == NULL)
                return;
            now = now->next;
        }

        if (now->next == NULL)
            return;
        Node *temp = now->next;
        now->next = temp->next;
        if (temp == tail)
        {
            tail = now;
        }
        delete temp;
    }

    void print()
    {
        Node *now = head;
        while (now != NULL)
        {
            cout << now->val << " ";
            now = now->next;
        }
        cout << endl;
    }
};

int main()
{
    List list;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            list.hed(V);
        }
        else if (X == 1)
        {
            list.tal(V);
        }
        else if (X == 2)
        {
            list.deleteIndex(V);
        }

        list.print();
    }

    return 0;
}
