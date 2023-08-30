#include <bits/stdc++.h> 

long long maxNonAdj(vector<int> &arr , int n , int index , long long* dp){
   if(index == 0) return arr[index];
   if(index<0) return 0;
   if(dp[index]!=-1) return dp[index];

   // picking up element at index
   long long pick = arr[index] + maxNonAdj(arr,n,index-2,dp);
   long long nonPick = 0 + maxNonAdj(arr,n,index-1,dp);
   long long ans =  max(pick,nonPick);
   dp[index] = ans;
   return ans;

}


long long int houseRobber(vector<int>& valueInHouse)
{
    // Write your code here.
    if(valueInHouse.size()==1) return valueInHouse[0];
    int n = valueInHouse.size();
    
    vector<int> temp1;
    for(int i =0 ; i<n ;i++){
        if(i!=0){
            temp1.push_back(valueInHouse[i]);
        }
    }
    long long* dp1 = new long long[temp1.size()];
    for (int i = 0; i < temp1.size(); i++) {
        dp1[i] = -1;
    }
    vector<int> temp2;
        for(int i =0 ; i<n ;i++){
        if(i!=n-1){
            temp2.push_back(valueInHouse[i]);
        }
    }
    long long* dp2 = new long long[temp2.size()];
    for (int i = 0; i < temp2.size(); i++) {
        dp2[i] = -1;
    }

    long long ans1 = maxNonAdj(temp1,temp1.size(),temp1.size()-1,dp1);
    // resetting the dp

    long long ans2 = maxNonAdj(temp2,temp2.size(),temp2.size()-1,dp2);

    return max(ans1,ans2);

}