#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int tri = 0;
	while (n--) {
		int coor[6];
		for (int i=0; i<6; i++) {
			cin >> coor[i];
		}
		int side[6] = {coor[0]-coor[2], coor[1] - coor[3], coor[0] - coor[4], coor[1] - coor[5], coor[2] - coor[3], coor[3] - coor[5]};
		for (int i=0; i<6; i+=2) {
			if (side[i]*side[(i+2)%6] + side[i+1]*side[(i+3)%6] == 0)  {
				tri++;
				break;
			}
		}
	}
	cout<< tri << endl;
}
