#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> L;

    int value;

    while (cin >> value && value != -1)
    {
        L.push_back(value);
    }

    L.sort();

    L.unique();

    for (int val : L)
    {
        cout << val << " ";
    }

    cout << endl;



    return 0;

    
}