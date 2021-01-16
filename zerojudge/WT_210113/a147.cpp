#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    while(1)
    {
        cin >> n;
        if(n == 0) break;

        for(int i=1;i<n;i++)
        {
            if(i%7 != 0)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
