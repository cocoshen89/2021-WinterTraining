#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    set<lint> pow_2;
    lint n,a,b,sum;
    for(int i=0;i<=1000;i++)
        pow_2.insert(i*i);
    cin >> n;
    for(int N=1;N<=n;N++)
    {
        cin >> a >> b;
        sum = 0;
        for(int i=a;i<b;i++)
        {
            if(pow_2.count(i) == 1)
                sum+=i;
        }
        cout << "Case " << N << ": " << sum << "\n";
    }
    return 0;
}
