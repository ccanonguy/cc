/*
 * 
 * 
 * 
 * https://www.hackerrank.com/challenges/chocolate-feast
 * 
 * 
 *  
 * */


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) { //iterating all the test cases
		int n, c, m;
		cin >> n >> c >> m; // n is the total amount, c is the cost, m is the number of wrappers needed to reimburse one chocolate
		int choco = n/c;  //no of the chocolates the person can buy initially
		int wrapper = choco; //no of wrappers left with him
		while (true) { //iterating until no of wrappers is less than m
			if (wrapper < m) {
				break;
			}
			else {
				int ne = wrapper/m;  //new chocolates with reimbursement of wrappers
				choco += ne;  //total chocolates
				wrapper = wraper%m + ne; // new wrappers left with him
			}
		}
		cout << choco << endl;
	}
}
