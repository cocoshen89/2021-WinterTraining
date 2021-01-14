#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint n;
    cin >> n;
    while(n--)
    {
        lint m,d;
        cin >> m >> d;
        lint A[m];
        for(int i=0;i<m;i++)
        {
            cin >> A[i];
        }
        sort(A,A+m);
        if(A[m-1] > d && A[0]+A[1] > d)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
