# def find_pos(arr, s):
#     for i in range(len(arr)):
#         if arr[i] == s[0]:
#             return i+1
    

# def sum(arr, s):
#     sum=0
#     for i in range(1, len(s)):
#         diff = find_pos(arr, s[i])-find_pos(arr, s[i-1])
#         diff2=abs(diff)
#         sum+=diff2
#     return sum

# if __name__ == '__main__':
#     n = int(input())
#     for i in range(n):
#         ss = input()
#         arr = list(ss)
        
#         s = input()
#         print(sum(arr, s))


