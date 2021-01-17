#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint a,b;
    map<lint,lint> vector_1;
    while(scanf("%lld:%lld",&a,&b))
    {
        if(a == 0 && b == 0) break;
        vector_1[a] = b;
    }
    lint ans = 0;
    while(scanf("%lld:%lld",&a,&b))
    {
        if(a == 0 && b == 0) break;
        if(vector_1[a] != 0)
            ans+=(b*vector_1[a]);
    }
    printf("%lld\n",ans);
    return 0;
}
