n = int(input())
lis = list(map(int,input().split()))
temp = [1] * n
for i in range(1,n):
    for j in range(i):
        if(lis[i] >lis[j] and temp[i] < temp[j] +1):
            temp[i] = temp[j] +1
print(temp)
print(max(temp))