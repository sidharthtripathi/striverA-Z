bool answer(int index, int target, vector<int>&arr,vector<vector<int>> &dp){
	if(target == 0) return true;
	if(index == 0) return arr[index] == target;
	// check if we got the ans
	if(dp[index][target]!=-1) return dp[index][target];

	// not picking
	bool notPick = answer(index-1,target,arr,dp);
	// picking
	bool pick = false;
	if(arr[index]<=target) pick = answer(index-1,target-arr[index],arr,dp);
	return dp[index][target] =  notPick or pick;
}

bool canPartition(vector<int> &arr, int n)
{
	// get the sum of all the elements
	int target = 0;
	for(int i = 0 ; i<n ;i++){
		target = target + arr[i];
	}

	if(target %2 == 1) return false;
	vector<vector<int>> dp(n,vector<int>(target/2+1,-1));
	return answer(n-1,target/2,arr,dp);

}
