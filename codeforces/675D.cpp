#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


#define INF 1000000000
#define EPS 1e-9
#define fore(i, l, n) for (int i=int(l); i<n; i++)
#define forn(i, n) fore(i, 0, n)
#define pb push_back
#define	mp make_pair

struct node {
	node *parent;
	node *leftChild;
	node *rightChild;
	int value;

	node() {}
	node(node *parent, node *leftChild, node *rightChild, int value) {
		this->parent = parent;
		this->leftChild = leftChild;
		this->rightChild = rightChild;
		this->value = value;
	}
};

int main() {
	int n;
	cin >> n;
	node *arr[n];
	forn(i,n) {
		int temp;
		cin >> temp;
		if (i == 0) {
			arr[0] = new node(NULL, NULL, NULL, temp);
		}
		else {
			node *currentNode;
			currentNode = arr[0];
			while(true) {
				if (currentNode->value < temp) {
					if (currentNode->rightChild == NULL) {
						arr[i] = new node(currentNode, NULL, NULL, temp);
						currentNode->rightChild = arr[i];
						break;
					}
					else {
						currentNode = currentNode->rightChild;
					}
				}
				else {
					if (currentNode->leftChild == NULL) {
						arr[i] = new node(currentNode, NULL, NULL, temp);
						currentNode->leftChild = arr[i];
						break;
					}
					else {
						currentNode = currentNode->leftChild;
					}
				}
			}
		}
	}

	fore(i, 1, n) {
		cout << arr[i]->parent->value << " ";
	}
 }

 //tle