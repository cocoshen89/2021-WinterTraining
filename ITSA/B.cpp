#include<bits/stdc++.h>
typedef long long lint;
using namespace std;
vector<pair<string,string> > A;
set<vector<lint> > re;
lint n;
void find_pair(lint now,bool used[10],vector<lint> B)
{
    if(B.size() == n)
    {
        re.insert(B);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(i == now)
            continue;
        if(used[i] == false){
            vector<lint> tmp = B;
            bool tmp_used[10];
            for(int i=0;i<10;i++)
                tmp_used[i] = used[i];
            tmp.push_back(i);
            tmp_used[i] = true;
            find_pair(now+1,tmp_used,tmp);
        }

    }

}
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin >> a >> b;
        A.push_back({a,b});
    }
    bool u[10];
    for(int i=0;i<10;i++)
        u[i] = false;
    vector<lint> t;
    find_pair(0,u,t);
    cout << re.size() << "\n";
    for(auto j:re)
    {
        for(int i=0;i<n;i++)
        {
            cout << A[i].first << " " << A[j[i]].second;
            if(i != n-1)
                cout << ",";
            else
                cout << "\n";
        }
    }
    return 0;
}
