s = input()
n = int(input())
rev = -1
i = 0
result = ""
while(i!=n):
    if(rev >= -len(s)):
        result = result + s[rev]
        rev-=1
    else:
        rev = -1
    i = len(result)
print(result)