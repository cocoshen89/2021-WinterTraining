#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint n;
lint ans;
lint A[200];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint ncase;
    cin >> ncase;
    while(ncase--)
    {
        cin >> n;
        for(int i=0;i<n;i++)
            cin >> A[i];
        sort(A,A+n);
        ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(A[i]*A[i] + A[j]*A[j] == A[k]*A[k]){
                        ans++;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
