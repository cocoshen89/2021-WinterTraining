#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint n,m;
    cin >> n;
    while(n--)
    {
        cin >> m;
        lint A[m];
        lint ans = 0;
        for(int i=0;i<m;i++)
            cin >> A[i];
        int i=0;
        while(i<m)
        {
            if(A[i] != i)
            {
                swap(A[i],A[A[i]]);
                ans++;
            }
            else
                i++;
        }
        cout << ans << "\n";
    }
    return 0;
}
