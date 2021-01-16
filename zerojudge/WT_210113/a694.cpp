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
        lint A[n+1][n+1];
        lint tmp;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
                A[i][j] = 0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin >> tmp;
                A[i][j] = A[i-1][j]+A[i][j-1]-A[i-1][j-1]+tmp;
            }
        }
        for(int i=0;i<m;i++)
        {
            lint a,b,c,d;
            cin >> a >> b >> c >> d;
            cout << A[c][d]-A[a-1][d]-A[c][b-1]+A[a-1][b-1] << "\n";
        }
    }

    return 0;
}
