#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    cin >> n;
    while(n--)
    {
        lint a,b,c;
        cin >> a >> b >> c;
        if(a == 1)
            cout << b+c << "\n";
        if(a == 2)
            cout << b-c << "\n";
        if(a == 3)
            cout << b*c << "\n";
        if(a == 4)
            cout << b/c << "\n";
    }
    return 0;
}
