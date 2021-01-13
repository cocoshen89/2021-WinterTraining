#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint n,m;
    cin >> n >> m;
    lint A[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
            cin >> A[i][j];
    }
    for(int k=0;k<m;k++)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i][j] > A[i][k]+A[k][j])
                    A[i][j] = A[i][k]+A[k][j];
            }
        }
    }
    lint a,b;
    while(n--)
    {
        cin >> a >> b;
        cout << A[a][b] << "\n";
    }
    return 0;
}
