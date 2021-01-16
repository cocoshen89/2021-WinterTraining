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
        lint A[n];
        lint ans = 0;
        for(int i=0;i<n;i++)
            cin >> A[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(A[j] > A[j+1])
                {
                    swap(A[j],A[j+1]);
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
