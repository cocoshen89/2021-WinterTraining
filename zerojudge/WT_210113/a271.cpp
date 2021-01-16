#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    lint N;
    cin >> N;
    while(N--)
    {
        lint x,y,z,w,n,m,toxic;
        string s;
        cin>> x >> y >> z >> w >> n >> m;
        cin.ignore();
        getline(cin,s,'\n');
        toxic = 0;
        for(auto i:s)
        {
            if(i == ' ') continue;
            m-=toxic;
            if(m <= 0) break;
            if(i == '1')
                m+=x;
            if(i == '2')
                m+=y;
            if(i == '3')
                m-=z;
            if(i == '4')
            {
                m-=w;
                toxic+=n;
            }
        }
        if(m<=0)
            cout<<"bye~Rabbit\n";
        else
            cout << m << "g\n";
    }
    return 0;
}
