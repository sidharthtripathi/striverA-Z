int first(vector<int> &arr, int k){
    int s = 0 , e = arr.size()-1;
    int f = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]<k) s = mid+1;
        else if(arr[mid]>k) e = mid-1;
        else{
            f = mid;
            e = mid - 1;
        }
    }
    return f;
}

int second(vector<int>&arr , int k){
    int s = 0 , e = arr.size()-1;
    int sec = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]<k) s = mid+1;
        else if(arr[mid]>k) e = mid-1;
        else{
            sec = mid;
            s = mid + 1;
        }
    }
    return sec;


}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int f = first(arr,x);
	int l = second(arr,x);
	if(f==-1) return 0;
	return l-f+1;
}
