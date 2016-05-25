#include <bits/stdc++.h>
using namespace std;

//map<int, pair<int, int[]> > mapp = {{1, {2,4}}, {2, {1, 3, 5}}, {3, {2,6}}, {4, {1, 5, 7}}, {5, {2, 4, 6, 8}}, {6, {3, 5, 9}}, {7, {4,8,0}}, {8, {7,5,9}}, {9, {8,6}}, {0, {7}}};

long long count(int pos, int n)
{
	if (n == 0) {
		switch(pos) {
			case 1:
			return 2;
			break;

			case 2:
			return 3;
			break;

			case 3:
			return 2;
			break;

			case 4:
			return 3;
			break;

			case 5:
			return 4;
			break;

			case 6:
			return 3;
			break;

			case 7:
			return 3;
			break;

			case 8:
			return 3;
			break;

			case 9:
			return 2;
			break;

			case 0:
			return 1;
			break;
		}
	}
	else {
		int i = 0;
		switch(pos) {
			case 1:
			i = 2;
			
				return count(2, n-1) + count(4,n-1);
			
			break;

			case 2:
			i = 3;
			
				return count(1, n-1) + count(3,n-1) + count(5, n-1);
			
			break;

			case 3:
			i = 2;
			
				return count(2, n-1) + count(6, n-1);
			
			break;

			case 4:
			i = 3;
			
				return count(1, n-1) + count(5,n-1) + count(7, n-1);
			
			break;

			case 5:
			i = 4;
			
				return count(4, n-1) + count(2,n-1) + count(6, n-1) + count(8,n-1);
			
			break;

			case 6:
			i = 3;
			
				return count(3, n-1) + count(5,n-1) + count(9, n-1);
			
			break;

			case 7:
			i = 3;
			
				return count(0, n-1) + count(4,n-1) + count(8, n-1);
			
			break;

			case 8:
			i = 3;
			
				return count(7, n-1) + count(5,n-1) + count(9, n-1);
			
			break;

			case 9:
			i = 2;
			
				return count(8, n-1) + count(6,n-1);
			
			break;

			case 0:
			i = 1;
			
				return count(7, n-1);
			
			break;
		}

	}

	return 0;
}

class UnsealTheSafe
{
public:
	long countPasswords(int N) 
	{
		return 0;
	}
	
};


int main() {
	return 0;
}


//wrong logic
