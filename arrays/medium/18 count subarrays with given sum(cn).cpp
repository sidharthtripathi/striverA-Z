// brute force
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for(int j = i ; j<n ; j++){
            sum = sum + arr[j];
            if(sum == k) count++;
        }
    }
    return count;
}

// optimal (using prefix sum)

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    int n = arr.size();
    int sum = 0;
    set<int> mySet;
    int count = 0;
    mySet.insert(0);
    for(int i = 0 ;i<n ;i ++){
        sum = sum + arr[i];
        auto it = mySet.find(sum-k);
        if(it != mySet.end()){
            count++;
        }
        mySet.insert(sum);
    }
    return count;
}