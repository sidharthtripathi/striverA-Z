// brute force

class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        int maxSum = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            int sum = 0;
            for(int j = i ; j<nums.size() ; j++){
                sum = sum + nums[j];
                maxSum = max(maxSum,sum);
            }
        }
        return maxSum;
    }
};


// optimal kadane

class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int bestSum = nums[0];
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i]+sum > nums[i]) sum  = sum + nums[i];
            else sum = nums[i];
            bestSum = max(bestSum , sum);
        }
        return max(bestSum,sum);

    }
};