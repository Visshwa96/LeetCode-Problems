n = input()
l = list(map(int,input().split()))
index_odd = []
index_even = []
temp = 0
min = 0
ind = 0
if(n % 2 != 0):
    for i in range(1,len(l),2):
        index_odd.append(i)
    print(*index_odd)
else:
    for i in range(0,len(l),2):
        index_even.append(i)
    print(*index_even)

for i in range(0,len(l)):
    for j in range(i+1,len(l)):
        if(l[i]>l[j]):
            temp = l[i]
            l[i] = l[j]
            l[j] = temp

print(*l)