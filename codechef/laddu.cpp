#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int cases;
		string nation;
		cin >> cases >> nation;
		int laddu = 0;
		while (cases--) {
			string task;
			cin >> task;
			if (task == "CONTEST_WON") {
				int rank;
				cin >> rank;
				int bonus = (rank > 20) ? 0 : 20 - rank;
				laddu += 300 + bonus;
			}
			else if (task == "TOP_CONTRIBUTOR") {
				laddu += 300;
			}		
			else if (task == "BUG_FOUND") {
				int sever;
				cin >> sever;
				laddu += sever;
			}		
			else if (task == "CONTEST_HOSTED") {
				laddu += 50;
			}
		}
		if (nation == "INDIAN") {
			cout << laddu/200;
		}
		else {
			cout << laddu/400;
		}
		cout << endl;
	}
}
