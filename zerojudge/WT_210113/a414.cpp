#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(1)
    {
        lint n;
        cin >> n;
        if(n == 0) break;
        vector<lint> binary;
        while(n > 0)
        {
            binary.push_back(n%2);
            n/=2;
        }
        binary.push_back(0);
        lint ans = 0;
        for(int i=0;i<binary.size()-1;i++)
        {
            if(binary[i]+1 < 2)
                break;
            else
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
