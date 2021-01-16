#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint n;
    while(cin >> n)
    {
        double sum = 0;
        double tmp;
        for(int i=0;i<n;i++)
        {
            cin >> tmp;
            sum+=tmp;
        }
        if(sum/n > 59)
            cout << "no\n";
        else
            cout << "yes\n";
    }
    return 0;
}
