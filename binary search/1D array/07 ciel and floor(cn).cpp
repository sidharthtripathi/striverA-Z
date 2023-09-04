pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	int floor = -1;
	int ciel = INT_MAX;
	for(int i = 0 ; i<n ;i++){
		if(arr[i]<=x){
			floor = max(floor,arr[i]);
		}
		if(arr[i]>=x){
			ciel = min(ciel,arr[i]);
		}
	}
	if(ciel == INT_MAX) ciel = -1;
	return {floor,ciel};
}
