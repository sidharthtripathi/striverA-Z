vector<int> rotateArray(vector<int>nums, int k) {
    // Write your code here.
        vector<int>temp(nums.size(),0);
        int n = nums.size();
        k = n-k;
        k = k%n;
        for(int i = 0 ; i<n ; i++){
            if(i<=n-k-1){
                temp[i+k] = nums[i];
            }
            else{
                temp[(i+k)%n] = nums[i];
            }
        }
        return temp;
}
