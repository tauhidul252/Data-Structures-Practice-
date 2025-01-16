#include <bits/stdc++.h>

using namespace std;

struct Node
{
    string address;
    Node *next;
    Node *prev;

    Node(string addr) : address(addr), next(NULL), prev(NULL) {}
};

class DL
{
private:
    unordered_map<string, Node *> address_map;

public:
    Node *head;
    Node *tail;
    Node *current;

    DL()
    {
        head = NULL;
        tail = NULL;
        current = NULL;
    }

    void insert(const string &addr)
    {
        Node *newNode = new Node(addr);

        if (head == NULL)
        {
            head = tail = current = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        address_map[addr]