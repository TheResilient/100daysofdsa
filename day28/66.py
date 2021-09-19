from itertools import permutations

s=str(input())


# print(s)
# print(s+" fuck yu")
perm=permutations(list(s))
for i in list(perm):
    print("".join(i))