#http://codeforces.com/problemset/problem/1/A

t = [int(i) for i in input().split(' ')]
v = [0,0]
for i in range(2) :
	v[i] = int(t[i]/t[2]);
	if (v[i]*t[2] != t[i]) :
		v[i] = v[i] + 1;

print(v[0]*v[1])
