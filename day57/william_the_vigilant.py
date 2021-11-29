# #boilerplate
# import sys

# def solve():
#     #input
#     n,q = map(int,input().split())
#     stri = str(input())
#     for i in range(q):
#         m,a = input().split(maxsplit=1)
#         m = int(m)
        
#         stri = stri[:m-1] + a + stri[m:]
#         # print(stri[m-1])
#         count = 0
#         for i in range(len(stri)):
#             if stri[i:i+3] == 'abc':
#                 count += 1
#         print(count)
#         # print(stri)


# if __name__ == "__main__":
#     solve()


def solve():
	n, m = map(int, input().split(' '))
	a = list(input())
 
	num = 0
	for i in range(n - 2):
		if (''.join(a[i:i + 3]) == 'abc'):
			num += 1
 
	for i in range(m):
		index, ch = input().split(' ')
		index = int(index) - 1
 
		for j in range(max(0, index - 2), index + 1):
			if (''.join(a[j:j + 3]) == 'abc'):
				num -= 1
 
		a[index] = ch
 
		for j in range(max(0, index - 2), index + 1):
			if (''.join(a[j:j + 3]) == 'abc'):
				num += 1
 
		print(num)
 
solve()