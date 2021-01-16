#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    lint Z = a*e - b*d;
    lint X = e*c - b*f;
    lint Y = a*f - d*c;
    if(Z == 0 && X == 0 && Y == 0)
        printf("Too many\n");
    else if(Z == 0 && (X != 0 || Y != 0))
        printf("No answer\n");
    else
    {
        printf("x=%.2f\n",(double)X/(double)Z,(double)Y/(double)Z);
        printf("y=%.2f\n",(double)Y/(double)Z);
    }
    return 0;
}
