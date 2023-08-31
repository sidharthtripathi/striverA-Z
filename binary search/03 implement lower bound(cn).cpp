int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low = 0,hi = n-1;
	int pLowerBound = -1;
	int mid = (low+hi)/2;
	while(low<=hi){
		mid = (low+hi)/2;
		if(arr[mid]<x){
			low = mid+1;
		}
		else{
			pLowerBound = mid;
			hi = mid-1;
		}
	}
	return pLowerBound==-1 ? n : pLowerBound;
}