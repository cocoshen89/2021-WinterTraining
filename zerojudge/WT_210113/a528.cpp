#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

bool cmp(string a,string b)
{
    if(a[0] == '+' && b[0] == '-')
        return false;
    if(a[0] == '-' && b[0] == '+')
        return true;
    if(a[0] == '+' && b[0] == '+')
    {
        if(a.size() > b.size())
            return false;
        else if(a.size() < b.size())
            return true;
        else
        {
            for(int i=1; i<(int)a.size(); i++)
            {
                if(a[i] > b[i])
                    return false;
                else if(a[i] < b[i])
                    return true;
            }
            return false;
        }
    }
    if(a[0] == '-' && b[0] == '-')
    {
        if(a.size() > b.size())
            return true;
        else if(a.size() < b.size())
            return false;
        else
        {
            for(int i=1; i<(int)a.size(); i++)
            {
                if(a[i] > b[i])
                    return true;
                else if(a[i] < b[i])
                    return false;
            }
            return false;
        }
    }
}
int main()
{
    lint n;
    while(cin >> n)
    {
        string tmp;
        string ans[n];
        for(int i=0; i<n; i++)
        {
            cin >> tmp;
            string s;
            if(tmp[0] != '-')
            {
                s = s+'+'+tmp;
            }
            else
            {
                s = tmp;
            }
            ans[i] = s;
        }
        sort(ans,ans+n,cmp);
        for(auto i:ans)
        {
            for(auto j:i)
            {
                if(j == '+')
                    continue;
                cout << j;
            }
            cout <<"\n";
        }
    }
    return 0;
}

