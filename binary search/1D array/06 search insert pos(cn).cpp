int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n = arr.size();
 	int start = 0;
    int end = n-1;
    int mid =(start+end)/2;
    while(start<=end){
		mid = (start+end)/2;
        if(arr[mid]==m){
            return mid;
        }
        else if(m>arr[mid] && m<arr[mid+1]){
            return mid+1;
        }
        else if(m>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
}