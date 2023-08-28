class Solution {
public:

    int maxSubArray(vector<int>& nums) {
        vector<int> bestSumArr;
        vector<int> sumArr;
        int sum = INT_MIN/2;
        int bestSum = INT_MIN/2;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]+sum > nums[i]) {
                sum  = sum + nums[i];
                sumArr.push_back(nums[i]);
                }
            else {
                sum = nums[i];
                sumArr = {nums[i]};
                }
            if(sum>bestSum){
                bestSum = sum;
                bestSumArr = sumArr;
            }
        }
        return bestSum;

    }
};