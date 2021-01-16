#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint n;
    while(scanf("%lld",&n) != EOF)
    {
        vector<lint> ans;
        while(n > 0)
        {
            if(n%2 == 1)
                ans.push_back(1);
            else
                ans.push_back(0);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        for(lint i:ans)
            printf("%lld",i);
        printf("\n");
    }
    return 0;
}
