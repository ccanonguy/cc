t = int(input())

for k in range(t) :
	case = int(input())
	if case > 2 :
		prime = list(range(2,case+1))
		ran = range(2,int(case**(1/2)+1))
		for i in ran :
			for j in range(i**2, case+1, i) :
				if j in prime :
					prime.remove(j)
		
		print(prime)
	elif case == 2 :
		print ("1")
	elif case == 1 :
		print ("0")
