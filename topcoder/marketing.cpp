#include <bits/stdc++.h>
using namespace std;

bool visited[30] = false;
long visited[30];

class node {
public:
	std::vector<long> edges;

	push(int i) {
		this->edges.push_back(i);
	}
};

dfs (node k) {
	res
}

class Marketing {
public:
	long howMany(vector<string> compete) {
		node p[compete.size()];
		for (int j=0; j<compete.size(); j++) {
			int i;
			istringstream ss(compete[j]);
			while (ss >> i) {
				p[j].push(i);
			}
		}

		for (int i=0; i<compete.size(); p++) {
			dfs(p[i]);
		}
	}
};