#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string(s);
    while(cin >> s)
    {
        for(int i=0;i<(int)s.size()-1;i++)
        {
            lint a = (lint)s[i];
            lint b = (lint)s[i+1];
            cout << abs(a-b);
        }
        cout << "\n";
    }
    return 0;
}
