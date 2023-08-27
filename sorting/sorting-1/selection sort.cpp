void swap(int i , int j , vector<int> &arr){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n = arr.size();
    for(int i = 0 ; i<n; i++){
        // finding max in this range
        int maxIndex = 0;
        for(int j = 0 ; j<n-i ; j++){
            if(arr[j]>=arr[maxIndex]){
                maxIndex = j;
            }
        } 
        swap(n-i-1,maxIndex,arr);
    }
}