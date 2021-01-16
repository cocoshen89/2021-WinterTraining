#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint a,b;
    while(cin >> a >> b)
    {
        lint ans = 0;
        if(a == 1)
            a = 2;
        for(int i=a;i<=b;i++)
        {
            bool flag = true;
            for(int j=2;j*j <= i;j++)
            {
                if(i%j == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}
