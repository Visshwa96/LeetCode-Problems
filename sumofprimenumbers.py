import math
def isprime(n):
    flag  = 1
    for i in range(2,n//2+1):
        if(n % i == 0):
            flag = 0
    if(flag):
        return n
    return 0
n = int(input())
i = 2

c = 0
rem = 0
while(i < n):
    if(isprime(i)):
        rem = abs(n - i)
        if(isprime(i) < rem):
            if(isprime(rem)):
                print(isprime(i),rem)
                if((i+rem) == n):
                    c+=1
    i+=1
print(c)
        