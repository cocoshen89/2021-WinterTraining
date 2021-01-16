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
        if(n > m)
            cout << m+1 << "\n";
        else
            cout << m << "\n";
    }
    return 0;
}
