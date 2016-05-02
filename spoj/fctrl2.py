t = int(input())

for a in range(t) :
	n = int(input())
	ans = 1
	for i in range(n) :
		ans *= (i+1)
	
	print (ans)
