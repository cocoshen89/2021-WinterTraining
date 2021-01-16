#include<bits/stdc++.h>
typedef long long lint;
using namespace std;
lint year[20000];
lint month[15];
void cnt_year()
{
    lint day = 0;
    for(int i=1; i<=10000; i++)
    {
        if(i%4 == 0)
        {
            if(i%4000 == 0)
                day+=365;
            else if(i%400 == 0)
                day+=366;
            else if(i%100 == 0)
                day+=365;
            else
                day+=366;
        }
        else
        {
            day+=365;
        }
        year[i] = day;
    }
}
void cnt_month()
{
    lint A[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    lint day = 0;
    for(int i=0; i<=12; i++)
    {
        day+=A[i];
        month[i] = day;
    }
}
lint cnt_pass_day(lint y,lint m,lint d)
{
    lint day = 0;
    day+=year[y-1];
    day+=month[m-1];
    day+=d;
    bool flag = true;
    if(y%4 == 0)
    {
        if(y%4000 == 0)
            flag = false;
        else if(y%400 == 0)
            flag = true;
        else if(y%100 == 0)
            flag = false;
        else
            flag = true;
    }
    else
    {
        flag = false;
    }
    if(flag && m > 2)
        day++;
    return day;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cnt_year();
    cnt_month();
    lint y1,y2,m1,m2,d1,d2;
    while(cin >> y1 >> m1 >> d1)
    {
        cin >> y2 >> m2 >> d2;
        lint a = cnt_pass_day(y1,m1,d1);
        lint b = cnt_pass_day(y2,m2,d2);
        cout << abs(a-b) << "\n";
    }
    return 0;
}
