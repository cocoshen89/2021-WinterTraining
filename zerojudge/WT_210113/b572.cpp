#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    cin >> n;
    while(n--)
    {
        lint h1,m1;
        lint h2,m2;
        lint m;
        cin >> h1 >> m1 >> h2 >> m2 >> m;
        if((h2-h1)*60 + (m2-m1) >= m)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
