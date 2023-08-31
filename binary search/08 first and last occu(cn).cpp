#include <bits/stdc++.h> 
int first(vector<int> &arr, int k){
    int s = 0 , e = arr.size()-1;
    int f = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]<k) s = mid+1;
        else if(arr[mid]>k) e = mid-1;
        else{
            f = mid;
            e = mid - 1;
        }
    }
    return f;
}

int second(vector<int>&arr , int k){
    int s = 0 , e = arr.size()-1;
    int sec = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]<k) s = mid+1;
        else if(arr[mid]>k) e = mid-1;
        else{
            sec = mid;
            s = mid + 1;
        }
    }
    return sec;


}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int f = first(arr,k);
    int s = second(arr,k);
    return {f,s};
}