#include <bits/stdc++.h>
using namespace std;

class FibonaccciDiv2 {
public:
	int find(int N) {
		std::vector<int> fibo;
		fibo.push_back(0);
		fibo.push_back(1);

		if (N == 0 || N == 1) return 0;
		int i = 2;
		while (true) {
			fibo.push_back(fibo[i-1] + fibo[i-2]);
			if (fibo[i] > N) return min(abs(N - fibo[i]), abs(N - fibo[i-1]));
			else if (fibo[i] == N) return 0;
			i++;
		}
	}
	
};


int main() {
	FibonaccciDiv2 a;
	cout << a.find(1000000);
}