vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    vector<int> ans(n,0);
    for(int i = 0 ; i<nums.size(); i++){
        ans[nums[i]-1]++;
    }
    return ans;
}