class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0 , e = nums.size()-1;
        int mid = 0;
        while(s<=e){
            mid = (s+e)/2;
            if(target>nums[mid])
                s = mid + 1;
            else if(target<nums[mid])
                e = mid - 1;
            else 
            return mid;
        }
        if(target<nums[0])
        return 0;
        else if(target>nums[nums.size()-1])
            return nums.size();
        else
            return s;
    }
};