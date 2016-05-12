#include <bits/stdc++.h>
using namespace std;

bool visited[400][600] = {false};

class node {
	public:
	int x, y;
	node(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

int fill(int x, int y) {
	int result = 0;
	stack<node> s;
	s.push(node(x,y));

	while (s.empty() == false) {
		node top = s.top();
		s.pop();

		if (top.x < 0 || top.x >=400 || top.y <0 || top.y >=600) continue;
		if (visited[top.x][top.y]) continue;

		visited[top.x][top.y] = true;

		result++;

		s.push(node(top.x + 1, top.y));
		s.push(node(top.x - 1, top.y));
		s.push(node(top.x, top.y + 1));
		s.push(node(top.x, top.y - 1));
	}

	return result;
}

class grafixMask {

	public:

	vector <int> sortedAreas(vector <string> rectangles){
		for (auto rectangle: rectangles) {
			istringstream ss(rectangle);
			int x1, y1, x2, y2;
			ss >> x1 >> y1 >> x2 >> y2;
			for (int x=x1; x<=x2; x++) {
				for (int y=y1; y<=y2; y++) {
					visited[x][y] = true;
				}
			}
		}
		std::vector<int> result;
		
		for (int x=0; x<400; x++) {
			for (int y=0; y<600; y++) {
				if (!visited[x][y])
					result.push_back(fill(x,y));
			}	
		}
		sort(result.begin(), result.end())
		return result;
	}
};
