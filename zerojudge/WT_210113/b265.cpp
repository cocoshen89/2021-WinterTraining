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
        map<vector<lint>,lint> A;
        for(int i=0;i<n;i++)
        {
            vector<lint> tmp_v;
            lint tmp;
            for(int j=0;j<5;j++)
            {
                cin >> tmp;
                tmp_v.push_back(tmp);
            }
            sort(tmp_v.begin(),tmp_v.end());
            A[tmp_v]++;
        }
        lint maxx = -1;
        for(auto i:A)
        {
            maxx = max(maxx,i.second);
        }
        lint ans = 0;
        for(auto i:A)
        {
            if(i.second == maxx)
                ans += maxx;
        }

        cout << ans << "\n";
    }
    return 0;
}
