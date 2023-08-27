int isSorted(int n, vector<int> arr) {
    // Write your code here.
    for(int i = 1; i<n ;i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}
