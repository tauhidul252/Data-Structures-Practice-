#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<long long int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long int> sum(n);

    sum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << sum[i] << " ";
    }

    return 0;
}
