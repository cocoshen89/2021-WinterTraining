#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint nu_long(lint a)
{
    if(a == 0)
        return 1;
    lint len = 0;
    while(a > 0)
    {
        len++;
        a/=10;
    }
    return len;
}
lint fast_pow(lint a,lint b)
{
    if(b == 0)
        return 1;
    lint x = fast_pow(a,b/2);
    x*=x;
    if(b%2 == 1)
        x*=a;
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n,m;
    bool flag = true;
    cin >> n >> m;
    for(int i=n;i<=m;i++)
    {
        lint tmp = i;
        lint sum = 0;
        lint len = nu_long(i);
        while(tmp > 0)
        {
            sum = sum + fast_pow(tmp%10,len);
            tmp/=10;
        }
        if(sum == i){
            cout << i << " ";
            flag = false;
        }
    }
    if(flag)
        cout << "none\n";
    return 0;
}
