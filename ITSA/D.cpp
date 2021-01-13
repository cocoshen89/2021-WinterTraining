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
        queue<lint> A;
        for(int i=b;i<=a;i++)
            A.push(i);
        if(b == 2)
            A.push(1);
        while(A.size() > 1)
        {
            lint tmp = A.front();
            A.pop();
            A.pop();
            A.push(tmp);
        }
        cout <<  A.front() << "\n";
        A.pop();
    }
    return 0;
}
