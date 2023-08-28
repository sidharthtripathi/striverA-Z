class Solution {
public:
void swap(vector<int> &arr,int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
    void sortColors(vector<int>& arr) {
    int n = arr.size();
    int low = 0 , mid = 0 , high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
        
    }
};