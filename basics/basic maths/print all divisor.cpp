int answer(int n, vector<int> &dp){
	if(n==1) return 1;
	// Write your code here.
	// check if we got the ans
	if(dp[n]!=-1) return dp[n];	
	int halfAns = answer(n-1,dp);
	int sum = 0;
	for(int i = 1 ; i<=n ; i++){
		if(n%i==0) sum = sum + i;
	}
	dp[n] =  halfAns + sum;
	return dp[n];
}

int sumOfAllDivisors(int n){
	vector<int>dp(n+1,-1);
	return answer(n,dp);
	
}

