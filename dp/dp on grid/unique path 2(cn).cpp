#include <bits/stdc++.h>

long long answer(int sr, int sc , vector <vector<int>> &mat , vector<vector<long long>> &dp){
    // base case
    if(sr == mat.size()-1 and sc == mat[0].size()-1)
    return 1;
    if(mat[sr][sc] == -1)
    return 0;

    // check if we already got ans
    if(dp[sr][sc]!=-1) return dp[sr][sc];
    // valid horizontal movement
    long long hPaths = 0;
    if(sc<mat[0].size()-1 and mat[sr][sc+1]!=-1){
        hPaths = answer(sr,sc+1,mat,dp);
    }

    // valid down movement
    long long vPaths = 0;
    if(sr<mat.size()-1 and mat[sr+1][sc] != -1){
        vPaths = answer(sr+1,sc,mat,dp);
    }

    dp[sr][sc] = (vPaths + hPaths)%(1000000000+7);
    return dp[sr][sc];


}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    vector<vector<long long>> dp(n,vector<long long>(m,-1));
    return answer(0,0,mat,dp);
}