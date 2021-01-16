#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n,m,mod_1,mod_2,mod_0;
    cin >> n;
    mod_0 = 0;
    mod_1 = 0;
    mod_2 = 0;
    while(n--)
    {
        cin >> m;
        if(m%3 == 0)
            mod_0++;
        else if(m%3 == 1)
            mod_1++;
        else
            mod_2++;
    }
    cout << mod_0 << " " << mod_1 << " " << mod_2 << "\n";
    return 0;
}
