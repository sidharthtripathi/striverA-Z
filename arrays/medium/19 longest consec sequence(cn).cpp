// brute force
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    int maxCount = 1;
    for(int i = 0 ; i<n; i++){
        int count = 1;
        int curr = a[i];
        for(int j = 0 ; j<n ; j++){
            if(a[j]==curr+1){
                count++;
                curr = a[j];
                j = -1;
                
            }
        }
        maxCount = max(count,maxCount);
    }
    return maxCount;
}


// better
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    sort(a.begin(),a.end());
    int curr = a[0];
    int count = 1;
    int maxCount = 1;
    for(int i = 1 ; i<n ;i++){
        if(a[i]==curr+1){
            count++;
            curr = a[i];
        }
        else if(a[i]==curr) continue;
        else{
            curr = a[i];
            count = 1;
        }
        maxCount = max(count,maxCount);
    }
    return maxCount;
}