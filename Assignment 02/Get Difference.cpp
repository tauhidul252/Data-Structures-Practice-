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

int difference()
{
    Node *H = NULL;
    Node *T = NULL;
    int value;

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    while (cin >> value && value != -1)
    {
        maxVal = max(maxVal, value);
        minVal = min(minVal, value);

        Node *nNode = new Node(value);

        if (!H)
        {
            H = T = nNode;
        }
        else
        {
            T->next = nNode;
            T = nNode;
        }
    }

    return maxVal - minVal;
}

int main()
{
    cout << difference() << endl;
    return 0;
}
