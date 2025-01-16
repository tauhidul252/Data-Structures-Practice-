#include <bits/stdc++.h>

using namespace std;


int main()
{
    int Q;

    cin >> Q;

    list<int> dll;

    while (Q--)
    {
        int X, V;

        cin >> X >> V;

        if (X == 0)
        {
            dll.push_front(V);
        }

        else if (X == 1)
        {
            dll.push_back(V);
        }


        else if (X == 2)
        {
            if (V >= 0 && V < dll.size())
            {
                auto it = dll.begin();
                for (int i = 0; i < V; ++i)
                {
                    ++it;
                }
                dll.erase(it);
            }
        }

        cout << "L -> ";


        for (int val : dll)
        {
            cout << val << " ";
        }



        cout << endl;

        cout << "R -> ";



        for (auto it = --dll.end(); it != dll.begin(); --it)
        {
            cout << *it << " ";
        }



        if (!dll.empty())
        {
            cout << *dll.begin();
        }


        cout << endl;


    }

    return 0;


}
