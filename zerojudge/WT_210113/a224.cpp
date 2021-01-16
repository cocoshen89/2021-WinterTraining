#include<bits/stdc++.h>
typedef long long lint;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(cin >> s)
    {
        map<char,lint> A;
        for(auto &i:s){
            if('A' <= i && i <= 'Z')
                i = (i-'A'+'a');
            if('a' <= i && i <= 'z')
                A[i]++;
        }
        lint odd = 0;
        for(auto i:A)
        {
            if(i.second%2 == 1)
                odd++;
        }
        if(odd > 1)
            cout << "no...\n";
        else
            cout << "yes !\n";
    }
    return 0;
}
