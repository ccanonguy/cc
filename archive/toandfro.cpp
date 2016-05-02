#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	while (true) {
		int column;
		cin >> column;
		if (!column) return 0;
		string input;
		cin >> input;
		int lenght = input.size();
		int rows = lenght/column;
		string output[lenght];
		for (int i=0; i<rows; i+=2) {
			for (int j=0; j<column; j++) {
				output[i+rows*j] = input[j+column*i];
			}
		}
		for (int i=1; i<rows; i+=2) {
			for (int j=0; j<column; j++) {
				output[i+rows*(column-1-j)] = input[j+column*i];
			}
		}
		for (int i=0; i<lenght; i++) {
			cout << output[i];
		}
		cout << endl;
	}
}
