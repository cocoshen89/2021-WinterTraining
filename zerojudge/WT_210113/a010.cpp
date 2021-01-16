#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef long long lint;

vector<lint> prime;
void make_prime()
{
    bool re[1000004];
    for(lint i=0;i<=1000000;i++)
        re[i] = false;
    for(lint i=2;i<=1000000;i++)
    {
        if(re[i] == false)
        {
            prime.push_back(i);
            lint k=1;
            while(i*k <= 1000000)
            {
                re[i*k] = true;
                k++;
            }
        }
    }
}
int main()
{
    make_prime();
    lint a;
    cin >> a;
    map<lint,lint> ans;
    for(auto i:prime)
    {
        while(a%i == 0)
        {
            ans[i]++;
            a/=i;
        }
    }
    bool f = false;
    for(auto i:ans)
    {
        if(f)
            cout << " * ";
        cout << i.first ;
        if(i.second > 1)
            cout << "^" << i.second;
        f = true;
    }
    cout << "\n";
    return 0;
}
