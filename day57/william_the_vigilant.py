#boilerplate
import sys

def solve():
    #input
    n,q = map(int,input().split())
    stri = str(input())
    for i in range(q):
        m,a = input().split(maxsplit=1)
        m = int(m)
        
        stri = stri[:m-1] + a + stri[m:]
        # print(stri[m-1])
        count = 0
        for i in range(len(stri)):
            if stri[i:i+3] == 'abc':
                count += 1
        print(count)
        # print(stri)


if __name__ == "__main__":
    solve()
