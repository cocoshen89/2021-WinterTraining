#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

lint ans[4];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> ans[0] >> ans[1] >> ans[2] >> ans[3])
    {
        lint n;
        cin >> n;
        while(n--)
        {
            lint cnt_A = 0;
            lint cnt_B = 0;
            lint tmp;
            lint guess[10]= {0,0,0,0,0,0,0,0,0,0};
            lint contain[10]= {0,0,0,0,0,0,0,0,0,0};
            for(int i=0; i<4; i++)
            {
                cin >> tmp;
                if(tmp == ans[i])
                {
                    cnt_A++;
                }
                else
                {
                    contain[ans[i]]++;
                    guess[tmp]++;
                }
            }
            for(int j=0; j<10; j++)
            {
                cnt_B+=min(guess[j],contain[j]);
            }
            cout << cnt_A << "A" << cnt_B << "B" << "\n";
        }
    }
    return 0;
}
