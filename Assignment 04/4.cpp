#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string name;
    
    cin >> t;

    queue<string>  l;

    while (t--)
    {
        int c;

        cin >> c;

        if (c == 0)
        {
            
            cin >> name;

            l.push(name);


        }



        else if (c == 1)
        {


            if (! l.empty())
            {
                cout <<  l.front() << endl;
                 l.pop();
            }



            else
            {
                cout << "Invalid" << endl;
            }



        }


    }

    return 0;



}
