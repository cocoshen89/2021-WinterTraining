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
        lint m,ans;
        cin >> m;
        if(m == 0)
        {
            cout << "0\n";
            continue;
        }
        ans = 1;
        while(m > 0)
        {
            ans*=(m%10);
            m/=10;
        }
        cout << ans << "\n";
    }
    return 0;
}
