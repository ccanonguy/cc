#include <bits/stdc++.h>
using namespace std;

class ParenthesesDiv2Medium {
	public :
	vector <int> correct(string s) {
		vector<int> seq;
		int o = 0;
		for (int i=0; i<s.length(); i++) {
			if (!o) {
				if (s[i] == ')') {
					seq.push_back(i);
				}
				o++;
			}
			else {
				if (s[i] == '(') {
					seq.push_back(i);
				}
				o--;
			}
		}
		return seq;
	}
};
