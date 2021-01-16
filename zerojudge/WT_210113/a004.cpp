#include<iostream>
using namespace std;
typedef long long lint;

int main()
{
    lint Y;
    while(cin >> Y)
    {
        if(Y%4 == 0)
        {
            if(Y%100 == 0)
            {
                if(Y%400 == 0)
                    cout << "閏年\n";
                else
                    cout << "平年\n";
            }
            else
            {
                cout << "閏年\n";
            }
        }
        else
        {
            cout << "平年\n";
        }
    }
    return 0;
}
