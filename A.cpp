#include<bits/stdc++.h>
using namespace std;
typedef long long lint;

int main()
{
    lint n,m;
    cin >> n;
    while(n--)
    {
        cin >> m;
        lint t=9;
        bool f=0;
        if(m == 1)
        {
            cout << "9\n";
        }
        else
        {
            cout << "98";
            t = 9;
            for(lint i=2;i<m;i++)
            {
                cout << t;
                t = (t+1)%10;
            }
            cout << "\n";
        }
    }
    return 0;
}
