x=int(input())
while x!=1:
	print(x, end=" ")
	if x%2==0:
		x//=2
	else:
		x=(x*3)+1
print(1)
