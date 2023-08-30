#include <bits/stdc++.h> 

int answer(int sr, int sc , vector<vector<int>> &grid,vector <vector<int>> &dp){
    // base case
    if(sr == grid.size()-1 and sc == grid[0].size()-1){
        return grid[sr][sc];
    }

    // check if answer is already there
    if(dp[sr][sc]!=-1) return dp[sr][sc];

    // valid down movement
    int vMin = INT_MAX/2;
    if(sr<grid.size()-1){
        vMin = answer(sr+1 , sc , grid,dp);
    }

    // valid right movement
    int hMin = INT_MAX/2;
    if(sc<grid[0].size()-1){
        hMin = answer(sr,sc+1,grid,dp);
    }

    dp[sr][sc] =  vMin+grid[sr][sc] <= hMin+grid[sr][sc] ? vMin+grid[sr][sc] : hMin+grid[sr][sc];
    return dp[sr][sc];

}
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
    return answer(0,0,grid,dp);
}