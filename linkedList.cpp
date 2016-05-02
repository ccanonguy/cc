#include <bits/stdc++.ht>
using namespace std;

struct node {
	int data;
	Node* next;
}

class list {
	private:
		Node* head;
	
	public:
		void pushFront(data) {
			Node* newNode = new Node;
			newNode->data = data;
			newNode->next = head;
			head = newNode;
		}
}
