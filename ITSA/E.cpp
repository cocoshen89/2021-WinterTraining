#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    vector<double> A;
    double tmp;
    while(cin >> tmp)
    {
        A.push_back(tmp);
    }
    lint n = A.size();
    lint index[n];
    double get[n];
    lint maxx_i = -1;
    double maxx_v = -1;
    for(int i=n-1;i>=0;i--)
    {
        index[i] = maxx_i;
        get[i] = maxx_v - A[i];
         if(maxx_v < A[i])
        {
            maxx_v = A[i];
            maxx_i = i;
        }
    }
    maxx_v = -1;
    for(int i=0;i<n;i++)
    {
        if(maxx_v < get[i])
        {
            maxx_v = get[i];
            maxx_i = i;
        }
    }
    if(maxx_v < 0.000001)
    {
        cout << "No profit!\n";
    }
    else
    {
        printf("Best buy date:%lld\n",maxx_i+1);
        printf("Best sell date:%lld\n",index[maxx_i]+1);
        printf("Profit:%.2f\n",get[maxx_i]);

    }
    return 0;
}
