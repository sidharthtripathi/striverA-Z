vector<int> helper(int i , int n , vector<int> nums){
    if(i==n-1){
        return {nums[i]};
    }
    vector<int> halfAns = helper(i+1,n,nums);
    halfAns.push_back(nums[i]);
    return halfAns;
}
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    return helper(0,n,nums);
    

}
