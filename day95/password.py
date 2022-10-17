from itertools import permutations

def find_password(l):
    # ans=permutations(l,4)
    
    sol=set(list(permutations(l, 4)))
    # print(sol)
    return len(sol)

if __name__ == '__main__':
    t=int(input())
    for i in range(t):
        n=int(input())
        l1=[0,1,2,3,4,5,6,7,8,9]
        l=list(map(int,input().split()))
        l2=list(set(l1)-set(l))
        # print(l2)
        ans=0
        for j in range(len(l2)):
            for k in range(j+1,len(l2)):
                ans=ans+find_password([l2[j],l2[j],l2[k],l2[k]])
        print(ans)