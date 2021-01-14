#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint gcd(lint a,lint b)
{
    if(b > a)
        return gcd(b,a);
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

string LCM(string a,string b)
{
    string ans;
    string tmp_a,tmp_b;
    lint n = a.size();
    lint m = b.size();
    lint k = gcd(n,m);
    for(int i=0;i<(int)m/k;i++)
        tmp_a+=a;
    for(int i=0;i<(int)n/k;i++)
        tmp_b+=b;
    if(tmp_a == tmp_b)
        return tmp_a;
    else
        return "-1";
}

int main()
{
    lint n;
    cin >> n;
    while(n--)
    {
        string a,b;
        cin >> a >> b;
        cout <<  LCM(a,b) << "\n";
    }
    return 0;
}
