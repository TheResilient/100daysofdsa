# cook your dish here
n,k=map(int,input().split())
arr=[int(x) for x in input().split()]
prod=1
l=[]
for i in range(n):
    while len(l)!=0 and l[-1][0]>arr[i]:
        prod*=(i-l[-1][1]+1)
        prod%=1000000007
        l.pop()
    l.append([arr[i],i])
print(prod)