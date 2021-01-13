import math
def B(a,t):
    if(a == 0):
        return t
    return B(a-1,t)+a*2.71828;
n = input()
n = int(n)
for i in range (0,n,1):
    T,time=input().split(',')
    T = float(T)
    time = int(time)
    ans = B(time,T)
    r = math.floor(ans * 10000) / 10000.0
    print('%.4f' % r)