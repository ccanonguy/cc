t = int(input())

def inversions(perm, n) :
	counter = 0
	for j in range (n) :
		for i in range (j) :
			if perm[i] > perm[j] :
				counter += 1
	return counter

def local_inv(perm, n) : 
	counter = 0
	for i in range(n-1) :
		if perm[i] > perm[i+1] :
			counter += 1
	return counter

for l in range(t) :
	n = int(input())
	perm = input().split()
	inv = inversions(perm, n)
	loc = local_inv(perm, n)
	if inv == loc : 
		print("YES")
	else :
		print("NO")
