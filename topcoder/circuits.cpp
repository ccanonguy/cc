#include <bits/stdc++.h>
using namespace std;

class Circuits {
public:
	int m = -999;
	int grid[50][50];
	int paths[50];
	bool visited[50] = {false};
	int howLong(std::vector<string> connects, std::vector<string> costs) {
		for (int i=0; i<50; i++) {
			for (int j=0; j<50; j++) {
				grid[i][j] = 0;
			}
		}

		for (int i=0; i<connects.size(); i++) {
			istringstream ss(connects[i]);
			istringstream ss1(costs[i]);
			int j, k;
			while (ss >> j) {
				ss1 >> k;
				grid[i][j] = k;
			}
		}

		for (int i=0; i<connects.size(); i++) {
			if (!visited[i]) {
				int result = dfs(i);
				if (result > m) {
					m = result;
				}
			}
		}
		return m;
	}

	int dfs(int i) {

		if (i < 0 || i>=50) return 0;

		visited[i] = true;
		int result = 0;
		int temp = -999;
		for (int j=0; j<50; j++) {
			result = 0;
			if (i != j) {
				if (grid[i][j] && !visited[j]) {
					result = grid[i][j] + dfs(j);
				}
				else if(grid[i][j] && visited[j]) {
					result = grid[i][j] + paths[j];
				}

				if (result > temp) temp = result;
			}
		}
		paths[i] = temp;
		return temp;
	}
};
