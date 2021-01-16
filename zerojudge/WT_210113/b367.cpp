#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint ncase;
    cin >> ncase;
    while(ncase--)
    {
        lint n,m,tmp;
        vector<vector<lint> > A,B;
        cin >> n >> m;
        for(int i=0;i<n;i++)
        {
            vector<lint> tmp_v;
            for(int j=0;j<m;j++)
            {
                cin >> tmp;
                tmp_v.push_back(tmp);
            }
            A.push_back(tmp_v);
        }
        B = A;
        for(int i=0;i<n;i++)
        {
            reverse(B[i].begin(),B[i].end());
        }
        reverse(B.begin(),B.end());
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i][j] != B[i][j])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            cout << "go forward\n";
        else
            cout << "keep defending\n";
    }
    return 0;
}
