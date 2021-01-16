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
        lint A[n+1];
        lint tmp;
        A[0] = 0;
        for(int i=1;i<=n;i++)
        {
            cin >> tmp;
            A[i] = A[i-1]+tmp;
        }
        for(int i=0;i<m;i++)
        {
            lint a,b;
            cin >> a >> b;
            cout << A[b]-A[a-1] << "\n";
        }
    }
    return 0;
}
