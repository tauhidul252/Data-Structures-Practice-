#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.empty();
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {

        Node *newNoad = new Node(val);
        if (head == NULL)
        {
            head = newNoad;
            tail = newNoad;
            return;
        }
        tail->next = newNoad;
        tail = newNoad;
    }
    void pop()
    {

        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail == NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    myStack a;
    myQueue b;
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val2;
        cin >> val2;
        b.push(val2);
    }
    while (!a.empty())
    {
        if (a.top() == b.front())
        {
            a.pop();
            b.pop();
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    if (a.empty() && b.empty())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}