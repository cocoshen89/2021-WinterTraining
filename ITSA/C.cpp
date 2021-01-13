#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint n;
    cin >> n;
    while(n--)
    {
        lint m;
        cin >> m;
        string A[m];
        for(int i=0;i<m;i++)
        {
            cin >> A[i];
        }
        lint ans = 0;
        for(int i=1;i<m-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                if(A[i][j] == '1')
                {
                    if(A[i-1][j] == '1' && A[i-1][j-1] == '1' && A[i-1][j+1] == '1'  && A[i][j-1] == '1' && A[i][j+1] == '1' && A[i+1][j] == '1' && A[i+1][j-1] == '1' && A[i+1][j+1] == '1')
                        ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
