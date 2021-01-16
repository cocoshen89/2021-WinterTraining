#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint ncase;
    lint A[200][200];
    cin >> ncase;
    while(ncase--)
    {
        lint n,m;
        cin >> n >> m;
        int cnt = 1;
        for (int i=0; i<(n+1)/2; i++)     // col
        {
            for (int j=0; j<n-2*i-1;j++)   // up
                A[i][i+j] = cnt++;
            for (int j=0; j<n-2*i-1;j++)   // right
                A[i+j][n-i-1] = cnt++;
            for (int j=0; j<n-2*i-1;j++)   // down
                A[n-i-1][n-j-i-1] = cnt++;
            for (int j=0; j<n-2*i-1;j++)   // left
                A[n-i-j-1][i] = cnt++;
        }
        if(n%2)
            A[n/2][n/2] = cnt;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
                if (m == 1)
                    printf("%5d", A[i][j]);
                else
                    printf("%5d", A[j][i]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
