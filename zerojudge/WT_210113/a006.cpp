#include<iostream>
#include<cmath>
using namespace std;
typedef long long lint;

int main()
{

    lint a,b,c,tmp;
    cin >> a >> b >> c;
    tmp = b*b-4*a*c;
    if(tmp > 0)
    {
        lint ans1,ans2;
        ans1 = ((-b)+(lint)sqrt(tmp))/(2*a);
        ans2 = ((-b)-(lint)sqrt(tmp))/(2*a);
        cout << "Two different roots ";
        cout << "x1=" << max(ans1,ans2) << " , ";
        cout << "x2=" << min(ans1,ans2)  << "\n";
    }
    else if(tmp == 0){
        lint ans;
        ans = ((-b)+(lint)sqrt(tmp))/(2*a);
        cout << "Two same roots x=" << ans << "\n";
    }
    else{
        cout << "No real root\n";
    }
    return 0;
}
