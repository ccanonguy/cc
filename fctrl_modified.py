def factorial(n) :
	ans = 1
	for i in range(n) :
		ans *= (i+1)
	return ans
	

n = int(input())
r = int(input())

ans = factorial(n)/(factorial(r)*factorial(n-r))

perm = 0;

for i in range(4) :
	select = bool("false");
	for j in range(i+1,4) :
		if (i != j) :
			select = bool("true")
		
		if (select) :
			for k in range(48) :
				for l in range(k+1, 48) :
					perm = perm +1

print (ans, perm)
