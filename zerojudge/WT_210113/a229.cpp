#include<bits/stdc++.h>
typedef long long lint;
using namespace std;
lint n;
void DFS(lint l,lint r,string s)
{
    if((lint)s.size() == n*2)
    {
        cout << s << "\n";
        return ;
    }
    string tmp;
    if(l == n)
    {
        tmp = s;
        tmp+=')';
        DFS(l,r+1,tmp);
    }
    else if(l == r)
    {
        tmp = s;
        tmp+='(';
        DFS(l+1,r,tmp);
    }
    else
    {
        tmp = s;
        tmp+='(';
        DFS(l+1,r,tmp);
        tmp = s;
        tmp+=')';
        DFS(l,r+1,tmp);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> n)
    {
        string s;
        DFS(0,0,s);
    }
    return 0;
}
