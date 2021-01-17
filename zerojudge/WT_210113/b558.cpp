#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint A[600];
    A[0] = 1;
    for(int i=1;i<600;i++)
        A[i] = A[i-1]+i;
    lint n;
    while(cin >> n)
        cout << A[n-1] << "\n";
    return 0;
}
