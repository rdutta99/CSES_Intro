s=input()
s1=s[0]
temp=0
ctr=0
for i in s:
	if s1==i:
		ctr+=1
	else:
		ctr=1
	if temp<ctr:
		temp=ctr
	s1=i

print(temp)