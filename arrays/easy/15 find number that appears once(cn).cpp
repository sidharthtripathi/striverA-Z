#include<vector>
int getSingleElement(vector<int> &nums){
	// Write your code here.	
        int i = 0 , j = i+1; 
        while(i<nums.size() and j<nums.size()){
            if(nums[i] == nums[j]){
                i = i+ 2;
                j = j+2;
            }
            else
            return nums[i];
        }
        return nums[i];
}