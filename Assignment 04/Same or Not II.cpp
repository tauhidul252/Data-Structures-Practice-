#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Stack
{
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }

    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    int pop()
    {
        if (head == NULL)
        {
            return 0;
        }
        int value = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        return value;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

};

class Queue
{
    Node *head, *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;


        if (tail == NULL)
        {
            head = tail = newNode;
        }


        else
        {
            tail->next = newNode;
            tail = newNode;
        }


    }

    int dequeue()
    {
        if (head == NULL)
        {
            return 0;
        }

        int value = head->data;
        Node *temp = head;
        head = head->next;


        if (head == NULL)
        {
            tail = NULL;
        }

        delete temp;
        return value;
    }

    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    int n, m, value, value2;
    cin >> n >> m;

    Stack s;
    Queue q;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        s.push(value);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> value2;
        q.enqueue(value2);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool areSame = true;

    while (!s.isEmpty() && !q.isEmpty())
    {
        if (s.pop() != q.dequeue())
        {
            areSame = false;
            break;
        }
    }


    if (areSame && s.isEmpty() && q.isEmpty())
    {
        cout << "YES" << endl;
    }


    else
    {
        cout << "NO" << endl;
    }




    return 0;






}
