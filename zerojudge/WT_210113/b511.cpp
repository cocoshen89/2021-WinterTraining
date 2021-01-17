#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint n,m;
lint A[1000];
set<vector<lint> > ans;
void DFS(lint now,lint sum,vector<lint> used)
{
    if(sum == m)
    {
        ans.insert(used);
        return;
    }
    if(sum > m || now == n) return;
    DFS(now+1,sum,used);
    used[now]++;
    DFS(now,sum+A[now],used);
    DFS(now+1,sum+A[now],used);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> A[i];
    cin >> m;
    vector<lint> tmp;
    for(int i=0;i<n;i++)
        tmp.push_back(0);
    DFS(0,0,tmp);
    for(auto i:ans)
    {
        cout << "(";
        for(int j=0;j<n;j++)
        {
            if(j != 0) cout << ",";
            cout << i[j];
        }
        cout << ")\n";
    }
    return 0;
}
