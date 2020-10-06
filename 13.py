from itertools import permutations
x=list(input())
perm = list(set(permutations(x)))
print(len(perm))
perm=sorted(perm)
for i in perm:
    out=""
    for j in i:
        out+=j
    print (out)