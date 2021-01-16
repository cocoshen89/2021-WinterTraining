#include<bits/stdc++.h>
typedef long long lint;
using namespace std;


lint gcd(lint a,lint b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}
int main()
{
    lint a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",gcd(a,b));
    return 0;
}
