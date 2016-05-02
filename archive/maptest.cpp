#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	char map[27] = "abcd1fghijklmnopqrstuvwxyz", s[101] = "hello";
	
	cout << map[s[1] - 'a'];
	cout << 'b' - 'a';
	return 0;
}
