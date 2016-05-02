t = int(input())

for q in range(t) :
	(n,m) = (int(input()), int(input()))
	relation = []
	for y in range(m) :
		relation.append((int(input()), int(input())))
	
	global stack
	stack = [relation[0]]
	
	
