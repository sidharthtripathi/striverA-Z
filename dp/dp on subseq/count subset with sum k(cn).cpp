
int answer(int index,vector<int> &arr, int target, vector<vector<int>> &dp){
	// base case
	if(target == 0) return 1;
	if(index == 0) return arr[index] == target;
	// check if we already got the ans
	if(dp[index][target]!=-1) return dp[index][target];
	int num1 = 0;
	num1 = answer(index-1,arr,target,dp);
	int num = 0;
	// get all the subseq which has sum of target-arr[index]
	if(arr[index]<=target){
		num = answer(index-1,arr,target-arr[index],dp);
	}
	return dp[index][target] = (num + num1)%(1000000000+7);
}
int findWays(vector<int>& arr, int k)
{
	// Write your code here.
	vector<vector<int>> dp(arr.size(),vector<int>(k+1,-1));
	return answer(arr.size()-1,arr,k,dp);
}
