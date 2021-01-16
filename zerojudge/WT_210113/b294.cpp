#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    while(cin >>n)
    {
        lint sum = 0;
        lint tmp;
        for(int i=1;i<=n;i++)
        {
            cin >> tmp;
            sum+=i*tmp;
        }
        cout << sum << "\n";
    }
    return 0;
}
