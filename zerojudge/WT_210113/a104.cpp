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
        for(int i=0;i<n;i++)
            cin >> A[i];
        sort(A,A+n);
        for(auto i:A)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
