#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m,val,val2;
    cin >> n >> m;

    stack<int> s;
    queue<int> q;
    

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        s.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        
        cin >> val2;
        q.push(val2);
    }

    if (n != m)
    {
        cout << "NO\n" << endl;
        return 0;
    }

    while (!s.empty())
    {
        if (s.top() == q.front())
        {
            s.pop();
            q.pop();
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    if (s.empty() && q.empty())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}