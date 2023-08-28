#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{   
    
    // Write your code here\
    int zeroes = 0;
    int  ones = 0;
    int twos = 0;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==0) zeroes++;
        else if(arr[i]==1) ones++;
        else twos++;
    }
    int k = 0;
    for(int i = 0 ;i<zeroes ; i++){
        arr[k] = 0;
        k++;
    }

    for(int i = 0 ; i<ones ; i++){
        arr[k] = 1;
        k++;
    }
    
    for(int i = 0 ; i<twos ; i++){
        arr[k] = 2;
        k++;
    }

}



// another approach
void swap(vector<int> &arr,int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sortArray(vector<int>arr,int n){
    int low = 0 , mid = 0 , high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }

}

