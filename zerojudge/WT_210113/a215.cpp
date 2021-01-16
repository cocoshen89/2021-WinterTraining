#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n,m;
    while(cin >> n >> m)
    {
        lint k = 0;
        lint tmp = 0;
        while(1)
        {
            k++;
            tmp+=n;
            n++;
            if(tmp > m)
                break;
        }
        cout << k << "\n";
    }
    return 0;
}
