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
                    cout << "�|�~\n";
                else
                    cout << "���~\n";
            }
            else
            {
                cout << "�|�~\n";
            }
        }
        else
        {
            cout << "���~\n";
        }
    }
    return 0;
}
