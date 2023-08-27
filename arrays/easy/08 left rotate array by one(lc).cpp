class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size(),0);
        int n = nums.size();
        k = k%n;
        for(int i = 0 ; i<n ; i++){
            if(i<=n-k-1){
                temp[i+k] = nums[i];
            }
            else{
                temp[(i+k)%n] = nums[i];
            }
        }
        nums = temp;
    }
};