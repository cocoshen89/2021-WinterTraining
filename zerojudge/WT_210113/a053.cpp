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
        if(n<=10)
            cout << n*6 << "\n";
        else if(10<n && n<=20)
            cout << 60+(n-10)*2 << "\n";
        else if(20<n && n <= 40)
            cout << 80+(n-20) << "\n";
        else
            cout << "100\n";
    }
    return 0;
}
