#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n,tmp,maxx;
    map<lint,lint> A;
    vector<lint> ans;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        A[tmp]++;
    }
    maxx = -1;
    for(auto i:A)
        maxx = max(maxx,i.second);
    for(auto i:A)
    {
        if(i.second == maxx)
            ans.push_back(i.first);
    }
    for(auto i:ans)
    {
        cout << i << " " << maxx << "\n";
    }
    return 0;
}
