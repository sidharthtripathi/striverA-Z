#include <bits/stdc++.h>
using namespace std;

int answer(int stDay,int notToPick, int n , vector<vector<int>> &points , vector<vector<int>> &dp){
    // base case
    if(stDay == n-1){
        // return the max one
        int maxi = INT_MIN;
        for(int i = 0 ; i<3 ;i++){
            if(i!=notToPick)
            maxi = max(maxi,points[stDay][i]);
        }
        return maxi;
    }

    // check if we have the ans
    if(notToPick!=-1)
    if(dp[stDay][notToPick]!=-1) return dp[stDay][notToPick];


    // pick anyone 
    int maxi = INT_MIN;
    for(int i = 0 ; i<3; i++){
        if(i!=notToPick){
            int result = answer(stDay+1,i,n,points,dp);
            maxi = max(maxi,result + points[stDay][i]);
        }
    }
    if(notToPick!=-1)
    dp[stDay][notToPick] = maxi;
    return maxi;

}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n,vector<int>(3,-1));
    return answer(0,-1,n,points,dp);
    
    
}