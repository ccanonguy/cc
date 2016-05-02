/* left and right converges on split point.
 * for the places left of the split point, value is less than at the split point.
 * for the places right of the split point, value is greater than at the split point.
 * chose a pivot. I chose lowest element in the vecor as pivot. value at split point is decided by this pivot.
 * if all conditions are satisfies, left moves leftwards and right moves rightward.
 * left stop when value is greater than pivot and right stops when the value is less than pivot. exchange left and right.
 * iteration ends when right is less than left and pivot point takes up it real place.
 * use this recursively 
 * */


int partition(vector<int> *arr, int lo, int hi) {
	int pivot = lo;																						//selecting a pivot element
	int left = lo+1, right = hi;																		//markers for left and right
	while (true) {
		while (left <= right && left <=hi && (arr->at(left) <= arr->at(pivot))) left++;					//left moving rightwards until value is greater than pivot value
		while((arr->at(right) >= arr->at(pivot)) && right >= left && right >= lo) right--;				//right moving leftwards until value is less than pivot value
		
		if (right < left) break;																		//stops when both the markers cross each other
		else {																							//otherwise exchanges the elements at left and right
			int temp = arr->at(left);
			arr->at(left) = arr->at(right);
			arr->at(right) = temp;
		}
	}
	
	int temp = arr->at(pivot);																			//moves the pivot to the split position(actual position)
	arr->at(pivot) = arr->at(right);
	arr->at(right) = temp;
	
	return right;																						//returns split point
}

void quicksort(vector<int> *arr, int lo, int hi) {
	if(lo < hi){ 																						//condition to break the recursion
		int p = partition(arr, lo, hi);																	//getting the split point
		quicksort(arr, lo, p-1);																		//recursion for the array elements before the split point
		quicksort(arr, p+1, hi);																		//recursion for the array elements after the split point
	}
}
