int minOfThree(int a,int b, int c){
	int z = min(a,b);
	return min(z,c);
}
int findMin(vector<int>& arr)
{
	// Write your code here.
	int n = arr.size();
	int low = 0, high = n-1;
	int mini = INT_MAX/2;
	while(low<=high){
		int mid = (low+high)/2;
		// check if left is sorted
		if(arr[low]<=arr[mid]){
			mini = min(mini,arr[low]);
			low = mid + 1;
		}

		// check if right is sorted
		if(arr[mid]<=arr[high]){
			mini = min(arr[mid],mini);
			high = mid - 1;
		}
	}
	return mini;

}