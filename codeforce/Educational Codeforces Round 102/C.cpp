#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    lint n;
    cin >> n;
    while(n--)
    {
        lint a,b;
        cin >> a >> b;
        vector<lint> A,B,P,R;
        lint j = a;
        for(int i=1;i<b&&j>0;i++,j--){
            A.push_back(i);
            R.push_back(i);
        }
        for(int i=b;i>=1&&j>0;i--,j--){
            B.push_back(i);
            R.push_back(i);
        }
        lint tmp = B.back();
        for(int i=1,j=0;i<=b;i++)
        {
            if(i >= tmp)
            {
                P.push_back(B[j]);
                j++;
            }
            else
            {
                P.push_back(i);
            }
        }
        for(int i=0;i<b;i++)
        {
            int tmp = R[i]-1;
            cout << P[tmp] << " ";
        }
        cout << "\n";
    }
    return 0;
}
