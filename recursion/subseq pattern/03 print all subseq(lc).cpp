class Solution {
public:
    vector<vector<int>> answer(vector<int> nums){
        if(nums.size()==1){
             return {{nums[0]}, {}};
        }
        int first = nums[0];
        nums.erase(nums.begin());
        vector<vector<int>> halfAns = answer(nums);
        vector<vector<int>> ans;
        for(int i = 0 ; i<halfAns.size() ; i++){
            ans.push_back(halfAns[i]);
            vector<int> subsetCopy = halfAns[i]; // Make a copy of the subset
            subsetCopy.insert(subsetCopy.begin(), first);
            ans.push_back(subsetCopy);
        }
        return ans;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> a;
        for(int i = 0 ; i<nums.size() ; i++){
            a.push_back(nums[i]);
        }
        vector<vector<int>> ans = answer(a);
        return ans;
    }
};