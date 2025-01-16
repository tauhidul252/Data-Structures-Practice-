#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    bool isDuplicate = false;

    for (int i = 1; i < N; ++i)
    {
        if (A[i] == A[i - 1])
        {
            isDuplicate = true;
            break;
        }
    }

    if (isDuplicate)
    {
        cout << "YES" << endl;
    }


    else
    {
        cout << "NO" << endl;
    }



    return 0;



}
