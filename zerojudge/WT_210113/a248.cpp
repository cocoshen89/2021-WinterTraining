#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint a,b,n;
    while(cin >> a >> b >> n)
    {
        lint INT;
        vector<lint> FLOAT;
        INT = a/b;
        a%=b;
        while((lint)FLOAT.size() != n)
        {
            a*=10;
            FLOAT.push_back(a/b);
            a%=b;
        }
        cout << INT << ".";
        for(auto i:FLOAT)
            cout << i;
        cout << "\n";
    }
    return 0;
}
