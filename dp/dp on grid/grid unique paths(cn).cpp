#include <bits/stdc++.h> 

int answer(int sr, int sc , int dr, int dc,vector<vector<int>> &dp){
	if(sr==dr and sc == dc){
		return 1;
	}
	if(dp[sr][sc]!=-1) return dp[sr][sc];
	
	// valid horizontal move
	int hPaths = 0;
	if(sc<dc){
		hPaths = answer(sr,sc+1,dr,dc,dp);
	}
	// valid down movement
	int vPaths = 0;
	if(sr<dr){
		vPaths = answer(sr+1,sc,dr,dc,dp);
	}
	dp[sr][sc] = hPaths + vPaths;
	return dp[sr][sc];

}

int uniquePaths(int m, int n) {
	// Write your code here.
	vector <vector<int>> dp(m+1,vector<int>(n+1,-1));
	return answer(1,1,m,n,dp);
}