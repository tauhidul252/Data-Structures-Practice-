#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int J = 0; J < T; ++J)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        bool S = true;

        for (int i = 1; i < n; ++i)
        {
            if (a[i] < a[i - 1])
            {
                S = false;
                break;
            }
        }

        cout << (S ? "YES" : "NO") << endl;
    }

    return 0;
}