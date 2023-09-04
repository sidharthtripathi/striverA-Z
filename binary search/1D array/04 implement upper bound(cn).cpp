int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int i = 0,j=n-1;
	int ub = -1;
	int mid = (i+j)/2;
	while(i<=j){
		mid = (i+j)/2;
		if(arr[mid]<=x) i = mid+1;
		else{
			ub = mid;
			j = mid - 1;
		}
	}
	if(ub == -1) return n;
	else return ub;

}