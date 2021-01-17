#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint n;
string maps[200];

lint short_path()
{
    lint x1 = 1;
    lint y1 = 1;
    lint x2 = n-2;
    lint y2 = n-2;
    lint U[] = {1,0,-1,0};
    lint P[] = {0,1,0,-1};
    lint len[200][200];
    for(int i=0;i<200;i++)
    {
        for(int j=0;j<200;j++)
        {
            len[i][j] = -1;
        }
    }
    len[x1][y1] = 1;
    queue<pair<lint,lint> > q;
    q.push({x1,y1});
    while(q.size() > 0)
    {
        lint tmp_x = q.front().first;
        lint tmp_y = q.front().second;
        lint tmp_len = len[tmp_x][tmp_y];
        q.pop();
        for(int i=0;i<4;i++)
        {
            lint go_x = tmp_x+U[i];
            lint go_y = tmp_y+P[i];
            if(len[go_x][go_y] != -1 || maps[go_x][go_y] == '#')
                continue;
            len[go_x][go_y] = tmp_len+1;
            q.push({go_x,go_y});
        }
    }
    return len[x2][y2];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> maps[i];
    lint ans = short_path();
    if(ans == -1)
        cout << "No solution!\n";
    else
        cout << ans << "\n";
    return 0;
}
