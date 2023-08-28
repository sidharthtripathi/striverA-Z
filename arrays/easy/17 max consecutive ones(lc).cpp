class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]==1){
                count++;
                maxCount = max(maxCount , count);
            }
            else count = 0;
        }
        return maxCount;
        
    }
};