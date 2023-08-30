#include <bits/stdc++.h> 

bool answer(int index , int n , vector<int> &arr, int target,vector<vector<int>> &dp){

  // base case
  if(target == 0 ){
    return true;
  } 
  if(index == 0){
     return arr[index] == target;
  }
  // check if we got the ans
  if(dp[index][target]!=-1) return dp[index][target];

  // not picking
  bool notPickCall = answer(index-1,n,arr,target,dp);
  // picking
  bool pickCall = false;
  if(arr[index]<=target){
    // pick it
    pickCall = answer(index-1,n,arr,target-arr[index],dp);
  }
  return dp[index][target] = notPickCall or pickCall;


}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
    bool ans = answer(n-1,n,arr,k,dp);
    return ans;
}