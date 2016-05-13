#include <bits/stdc++.h>
using namespace std;

int main () {
	int i,j;
	while(cin >> i >> j) {
		int temp_i = i;
		int temp_j = j;
		if (temp_i > temp_j) swap(temp_i,temp_j);
		int next = temp_i;
		int max = -999;
		while (next <= temp_j) {
			unsigned int now = next;
			int answer = 1;
			while (now != 1) {
				if (now%2 == 1) now = 3*now +1;
				else now = now/2;
				answer++; 
			}
			if (answer > max) max = answer;
			next++;
		}

		cout << i << " " << j << " " << max << endl;
	}
}