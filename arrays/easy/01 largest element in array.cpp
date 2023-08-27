#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi = INT_MIN;
    for(int i : arr){
        maxi = max(maxi,i);
    }
    return maxi;
}