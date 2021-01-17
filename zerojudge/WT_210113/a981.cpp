#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint n,m;
vector<lint> A;
vector<vector<lint> > ans;
map<lint,vector<vector<lint> > > bin_a;
map<lint,vector<vector<lint> > > bin_b;
void left_half(lint now,lint sum,vector<lint> in)
{
    if(now == n/2){
        bin_a[sum].push_back(in);
        return;
    }
    vector<lint> tmp = in;
    left_half(now+1,sum,tmp);
    tmp.push_back(A[now]);
    left_half(now+1,sum+A[now],tmp);
}
void right_half(lint now,lint sum,vector<lint> in)
{
    if(now == n){
        bin_b[sum].push_back(in);
        return;
    }
    vector<lint> tmp = in;
    right_half(now+1,sum,tmp);
    tmp.push_back(A[now]);
    right_half(now+1,sum+A[now],tmp);
}
void choose_ans()
{
    for(auto i:bin_a)
    {
        for(auto j:i.second)
        {
            lint tmp = m-i.first;
            if(bin_b[tmp].size() == 0 ) continue;
            for(auto k:bin_b[tmp])
            {
                vector<lint> tmp_v = j;
                for(auto u:k)
                    tmp_v.push_back(u);
                ans.push_back(tmp_v);
            }
        }

    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n >> m)
    {
        A.clear();
        ans.clear();
        for(int i=0;i<n;i++)
        {
            lint tmp;
            cin >> tmp;
            A.push_back(tmp);
        }
        sort(A.begin(),A.end());
        vector<lint> tmp;
        left_half(0,0,tmp);
        right_half(n/2,0,tmp);
        choose_ans();
        sort(ans.begin(),ans.end());
        if(ans.size() == 0)
            cout << "-1";
        else
        {
            for(auto i:ans)
            {
                for(auto j:i)
                    cout << j << " ";
                cout << "\n";
            }
        }
    }
    return 0;
}
