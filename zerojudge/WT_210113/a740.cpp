#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    while(cin >> n)
    {
        lint ans = 0;
        lint tmp = n;
        for(int i=2;i*i<=n;i++)
        {
            while(tmp%i == 0)
            {
                ans+=i;
                tmp/=i;
            }
        }
        if(tmp > 1)
            ans+=tmp;
        cout << ans << "\n";
    }
    return 0;
}
