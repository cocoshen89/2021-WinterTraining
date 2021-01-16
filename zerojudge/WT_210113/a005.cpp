#include<iostream>
#include<algorithm>
using namespace std;
typedef long long lint;

int main()
{
    lint n;
    cin >> n;
    while(n--)
    {
        lint A[5];
        for(lint i=0;i<4;i++){
            cin >> A[i];
        }
        sort(A,A+4);
        if(A[1]-A[0] == A[2]-A[1]){
            A[4] = A[3]+(A[3]-A[2]);
        }
        else{
            A[4] = A[3]*(A[3]/A[2]);
        }
        for(auto i:A)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
