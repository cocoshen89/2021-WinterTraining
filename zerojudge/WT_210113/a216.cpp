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
        cout << n*(n+1)/2 << " " << n*(n+1)*(n+2)/6 << "\n";
    }
    return 0;
}
