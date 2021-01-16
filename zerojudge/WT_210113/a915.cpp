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
        pair<lint,lint> A[n];
        for(int i=0;i<n;i++)
        {
            lint x,y;
            cin >> x >> y;
            A[i] = {x,y};
        }
        sort(A,A+n);
        for(auto i:A)
            cout << i.first << " " << i.second << "\n";
    }
    return 0;
}
