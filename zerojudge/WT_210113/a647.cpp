#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    cin >> n;
    while(n--)
    {
        double a,b;
        cin >> a >> b;
        double tmp = (b-a)/a*100;
        if(tmp > 0)
            tmp+=0.0000001;
        else
            tmp-=0.0000001;
        if(abs(tmp) < 1e-6)
            tmp = 0;
        if(tmp <= -7 || tmp >= 10)
            printf("%.2f%% dispose\n",(double)tmp);
        else
            printf("%.2f%% keep\n",(double)tmp);
    }
    return 0;
}
