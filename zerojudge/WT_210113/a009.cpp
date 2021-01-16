#include<iostream>
using namespace std;
typedef long long lint;

int main()
{
    lint k=('*'-'1');
    string s;
    cin >> s;
    for(auto i:s)
        cout << (char)(i+k);
    cout << "\n";
    return 0;
}
