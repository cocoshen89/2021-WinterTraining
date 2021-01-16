#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    string s1,s2;
    bool flag;
    cin >> s1;
    s2 = s1;
    reverse(s1.begin(),s1.end());
    flag = true;
    for(int i=0;i<(int)s1.size();i++)
    {
        if(s1[i] != s2[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
