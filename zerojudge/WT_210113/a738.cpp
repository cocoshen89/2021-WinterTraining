#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint gcd(lint a,lint b)
{
    if(b == 0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n,m;
    while(cin >> n >> m)
    {
        cout << gcd(n,m) << "\n";
    }
    return 0;
}
