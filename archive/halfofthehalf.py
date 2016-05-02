t = int(input())

for i in range(t) :
	case = input()
	count = 0
	
	for letter in case :
		count += 1
	
	for j in range(0,int(count/2),2) :
		print (case[j], end="")
	
	print()
