int findKRotation(vector<int> &arr){
    // Write your code here.    
    int n = arr.size();
	int low = 0, high = n-1;
	int mini = 10000000;
	int minIndex = -1;
	while(low<=high){
		int mid = (low+high)/2;
		// check if left is sorted
		if(arr[low]<=arr[mid]){
            if(arr[low]<=mini) minIndex = low;
			mini = min(mini,arr[low]);
			low = mid + 1;
		}

		// check if right is sorted
		if(arr[mid]<=arr[high]){
            if(arr[mid]<=mini) minIndex = mid;
			mini = min(arr[mid],mini);
			high = mid - 1;
		}
	}
	return minIndex;
}