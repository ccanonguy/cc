#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> *arr, int lo, int hi) {
	int pivot = lo;
	int left = lo+1, right = hi;
	while (true) {
		while (left <= right && left <=hi && (arr->at(left) <= arr->at(pivot))) left++;
		while((arr->at(right) >= arr->at(pivot)) && right >= left && right >= lo) right--;
		
		if (right < left) break;
		else {
			int temp = arr->at(left);
			arr->at(left) = arr->at(right);
			arr->at(right) = temp;
		}
	}
	
	int temp = arr->at(pivot);
	arr->at(pivot) = arr->at(right);
	arr->at(right) = temp;
	
	return right;
}

void quicksort(vector<int> *arr, int lo, int hi) {
	if(lo < hi){
		int p = partition(arr, lo, hi);
		quicksort(arr, lo, p-1);
		quicksort(arr, p+1, hi);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		
		vector<int> men(n), women(n);
		for (int i=0; i<n; i++) cin >> men[i];
		for (int i=0; i<n; i++) cin >> women[i];
		
		quicksort(&men, 0, n-1);
		quicksort(&women, 0, n-1);

		int sum = 0;
		
		for (int i=0; i<n; i++) {
			sum += men[i]*women[i];
		}
		
		cout << sum << endl; 
	}
}
