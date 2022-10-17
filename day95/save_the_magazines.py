def solution(lid, magazine):
    sum=0
    lid=list(lid)
    if(lid[0]=='1'): 
        sum=sum+magazine[0]
    for i in range(1,len(magazine)):
        if(lid[i]=='1' and lid[i-1]=='0' and magazine[i-1]>magazine[i]):
            sum=sum+magazine[i-1]
            lid[i]='0'
            lid[i-1]='1'
        elif(lid[i]=='1' and magazine[i-1]<magazine[i]):
            sum=sum+magazine[i]
            i=i+1
    print("lid-->",lid)
    return sum
    
if __name__ == '__main__':
    t=int(input())
    for i in range(t):
        n=int(input())
        lid=input()
        magazine=list(map(int,input().split()))
        ans=solution(lid,magazine)
        print(ans)

# I am trying to solve this problem on codechef. I am getting the correct answer for all the test cases except for the last one. I am not able to figure out what is wrong with my code. Can anyone help me out?

# Problem link: https://www.codechef.com/problems/SAVEIT
