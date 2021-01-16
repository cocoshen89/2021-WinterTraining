#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    bool flag;
    while(cin >> n)
    {
        if(n == 0)
        {
            cout << "0\n";
            continue;
        }
        while(n%10 == 0)
            n/=10;
        while(n > 0)
        {
            cout << n%10;
            n/=10;
        }
        cout << "\n";
    }
    return 0;
}
