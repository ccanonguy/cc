#include <bits/stdc++.h>
using namespace std;

int main() {
	map<string, string> seasons;
	seasons["January"] = "winter";
	seasons["February"] = "winter";
	seasons["March"] = "spring";
	seasons["April"] = "spring";
	seasons["May"] = "spring";
	seasons["June"] = "summer";
	seasons["July"] = "summer";
	seasons["August"] = "summer";
	seasons["September"] = "autumn";
	seasons["October"] = "autumn";
	seasons["November"] = "autumn";
	seasons["December"] = "winter";
	string s;
	cin >> s;
	cout << seasons[s];
}
