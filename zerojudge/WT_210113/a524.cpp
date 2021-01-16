#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint n;
vector<string> ans;
void DFS(vector<bool> used,string s)
{
    if(s.size() == n)
    {
        ans.push_back(s);
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(used[i] == false)
        {
            vector<bool> tmp_used = used;
            string tmp_s = s;
            tmp_used[i] = true;
            tmp_s+=(char)(i+'0');
            DFS(tmp_used,tmp_s);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n)
    {
        ans.clear();
        vector<bool> used;
        string s;
        for(int i=0;i<n+1;i++)
            used.push_back(0);
        DFS(used,s);
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        for(auto i:ans)
            cout << i << "\n";
    }
    return 0;
}
