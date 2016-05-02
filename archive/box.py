t = int(input())

for i in range(t) :
	p, s = map(int, input().split())
	x = y = (p - (p**2 - 24*s)**(1/2))/12
	z = (p/4)  - 2*x
	v = x*y*z
	print (round(v, 2))
