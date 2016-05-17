import sys

dp = [1, 2, 5, 13]

for i in range(4, 1001):
	dp.append(2*dp[i-1] + dp[i-2] + dp[i-3])

v= 1
while (v == 1):
	n = sys.stdin.readline()
	if (n == ''):
		break;

	try:
		n = int(n)
	except ValueError:
		break;

	print (dp[n]);