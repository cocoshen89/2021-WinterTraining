#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint n,m;
    while(scanf("%lld %lld",&n,&m) != EOF)
    {
        lint A[n][m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                scanf("%lld",&A[i][j]);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%lld ",A[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}
