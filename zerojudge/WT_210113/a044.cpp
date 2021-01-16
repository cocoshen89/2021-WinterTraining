#include<iostream>
using namespace std;
typedef long long lint;

int main()
{
    lint n;
    while(cin >> n)
    {
        cout << (n*n*n+5*n+6)/6 << "\n";
    }
    return 0;
}
